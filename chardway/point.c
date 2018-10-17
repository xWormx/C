#include <stdio.h>

int main(int argc, char *argv[])
{
	char *names[] = { "Carl", "Johan", "Fredrik" };

	printf("Adress = %p\n", names[0]);
	
	printf("Value = %s\n", names[0]);

	printf("Adress = %p\n", names[1]);
	
	printf("Value = %s\n", names[1]);

	printf("Adress = %p\n", names[2]);
	
	printf("Value = %s\n", names[2]); 
	
	printf("Adress = %p\n", names[3]);
	
	printf("Value = %s\n", names[3]);

	return 0;
}
