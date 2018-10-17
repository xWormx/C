#include <stdio.h>

int main()
{
	int a = 10;
	int *pointer = &a;
	int *b = &a + 1;

	printf("värdet av int b = %d\nvärdet av *pointer = %d\n", *b, pointer);
	printf("adress till int a = %x\nadress till *pointer = %x\n", &a, pointer);
	printf("En pointer är av en viss datatyp, t ex int eller char och lagrar
		en variabels adress");
	printf("Ändring för git-syfte");

	return 0;
}

