#include <stdio.h>

void func(char string[])
{
	printf("hej func! jag är %s\n", string);
}
	
int main(int argc, char *argv[])
{
	char namn[] = "Calle";
	
	func(namn);
}
