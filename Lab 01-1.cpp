#include <stdio.h>
int main()
{
	char x;
	int i = 0;
	while (i != 1)
	{
		printf("Char:");
		scanf("%c", &x);
		fflush(stdin);

		if (x >= 'A' && x <= 'Z')
		{
			x = x - 64;
			printf("%d\n", x);
		}
		else if (x >= 'a' && x <= 'z')
		{
			x = x - 96;
			printf("%d\n", x);
		}
		else
		{
			break;
		}
	}
	printf("End");
	return 0;
}
