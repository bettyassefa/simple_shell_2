#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - prints every paramater from input
*
* Return: Always 0
*/
int main(void)
{
	char *buffer, *delim, *params;
	size_t b_size;
	int i;

	b_size = 32;
	buffer = malloc(sizeof(char) * b_size);
	delim = " ";
	i = 0;

	printf("$ ");

	getline(&buffer, &b_size, stdin);

	printf("Command entered is: %s", buffer);

	params = strtok(buffer, delim);

	printf("Parameters entered are:\n");

	while (params)
	{
		printf("[%d]: %s\n", i, params);
		params = strtok(NULL, delim);
		i++;
	}

	return (0);
}
