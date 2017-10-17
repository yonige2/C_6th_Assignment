#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	char ch;
	int i;

	while ((ch = getch()) != 'q')
	{
		for (i = 0; i < ch - '0'; i++)
			putch(ch);

		printf("\n");
	}
	
	return 0;
}