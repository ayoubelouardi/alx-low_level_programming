/**
 * print_name - print a name
 * @name: the name
 * @f: the function to print the name with
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
