#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - append_text_to_file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add 
 * at the end of the file.
 * Description: Longer description of the function)?
 * Return:
 * 1 on success
 * -1 on failure
 * -> if filename is NULL
 * -> If text_content is NULL, do not add anything to the
 *	file.
 * -> Return 1 if the file exists.
 * -> Return -1 if the file does not exists.
 * -> Return -1 if you do not have the required premissions
 *	to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{


	return ();
}
