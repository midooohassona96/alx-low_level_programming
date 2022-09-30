#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[])

{

	int index, multipication;

	multipication = 1;

	if (argc < 3)

	{

		printf("Error\n");

		return (1);

	}

	for (index = 1; index < argc; index++)

	{

		multipication = multipication * atoi(argv[index]);

	}

	printf("%d\n", multipication);

	return (0);

}
