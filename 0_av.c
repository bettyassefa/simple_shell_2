#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints all the arguments, without using ac
* @ac: number of arguments
* @av: argument list
*
* Return: Always 0
*/
int main(int ac, char **av)
{
	while (*av != NULL)
	{
		printf("%s\n", *av);
		av++;
	}

	return (0);
}	
