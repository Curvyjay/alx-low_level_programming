#include <stdio.h>
int main()
{
	char lowercase = 'a';
	char uppercase  ='A';
	// Print lowercase alphabet
	while (lowercase <= 'z' ) {
		putchar (lowercase);
		lowercase++;
	}
	//Print uppercase alphabet
	while (uppercase <= 'Z' ) {
		putchar (uppercase);
		uppercase++;
	}
	// Print new line
	 putchar('\n');
	// return 0;
}
