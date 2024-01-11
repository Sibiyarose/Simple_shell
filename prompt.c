#include "main.h"

/**
 * main - Entry point
 * Description: Display a prompt
 * Return: always 0 (success)
 */

int main(void)
{
	char *full_command;
	size_t n = 0;
	ssize_t read_line;

	while (1)
	{
		printf("Rose$ ");
		read_line = getline(&full_command, &n, stdin);
		printf("%s\n", lineptr);


		if (read_line == -1)
		{
			printf("Exiting bye...\n");
			return (-1);

			free(lineptr);
		}
	}
	return (0);
}
