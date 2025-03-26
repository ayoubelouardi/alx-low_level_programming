#include <stdio.h>

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

int main(void)
{
	char s[100];

	scanf("%s", &s);

	int c = checksum(s);


	printf("%d\n", c);

	return 0;
}

