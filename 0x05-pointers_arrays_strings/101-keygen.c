#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASS_LEN 2772 / 33 + 1
#define MIN_PASS_LEN 2772 / 126 + 1


long checksum(char *param_1);

char *create_pass(void)
{
    int i = 0;
    char *pass = malloc((MAX_PASS_LEN) * sizeof(char));

    if (pass == NULL)
    {
        perror("Failed to allocate memory");    
        return NULL;
    }

    srand(time(NULL));
    pass[0] = '\0';

    while (i < MAX_PASS_LEN)
    {
        int passVal = checksum(pass);
            
        if (2772 - passVal >= 33 && 2772 - passVal <= 126)
        {
            pass[i] = 2772 - passVal;
            pass[i + 1] = '\0';
            break;
        }
        else
        {
            pass[i] = rand() % (126 - 33 + 1) + 33;
            i++;
        }
    }

    return pass;
}



/**
 * those are the 2 ranges i'm allowed to choose between them: 
 * 33 - 126;
 *
 * while (checkusm ( pass ) != 2772)
 * {
 * 	if (passVal <= 126)
 * 	{
 *		(add the char of this dec)
 *		2772 - passVal = ((char))
 * 	}
 * 	else
 * 	{
 *		choose randomly in range.
 * 	}
 * }
 *
 */

int main(void)
{
	char *psw = create_pass();

	if (psw != NULL)
	{
		printf("%s\n", psw);
		free(psw);
	}

	return 0;
}


long checksum(char *param_1)
{
  char *local_20;
  long local_10;
  
  local_10 = 0;
  for (local_20 = param_1; *local_20 != '\0'; local_20 = local_20 + 1) {
    local_10 = local_10 + *local_20;
  }
  return local_10;
}
