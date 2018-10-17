#include <stdio.h>

int main(int argc, char *argv[])
{

	char name[] = "Zed";
	int areas[] = { name[0], 12, 13, 14, 20 };
	int area[] = { 10, name[1] };
	char full_name[] = { 
		'Z', 'e', 'd',
	       	' ', 'A', '.', ' ',
	       	'S', 'h', 'a', 'w', '\0' 
	};

	// WARNING: on some systems you may have to change the
	// %ld in this code to %u since it will use unsigned ints
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", 
			sizeof(areas) / sizeof(int));
	printf("The first area is %d, the 2nd %d.\n", areas[22], areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n",
		sizeof(full_name) /sizeof(char));

	full_name[10] = 'P'; // index[10] är 'w' så den byter ut w mot P....

	printf("name=\"%s\" and full_name=\"%s\"", name, full_name);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("area: %d\n", area[1]);
	
	return 0;
	
}
