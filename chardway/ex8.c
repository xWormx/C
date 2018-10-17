#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1) {
		printf("You have no arguments.(except './ex8', which isn't an user-input arguemnt.)\n");
	} else if (argc > 1 && argc < 4){
		printf("Here's you arguments: \n");

		for (i = 1; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have to many arguments. You suck \n");
	}

	return 0;
}
