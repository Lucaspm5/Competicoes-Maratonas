#include <stdio.h>

int main(int argc, char **argv)
{

	int x , y, i;

	scanf("%d %d", &x, &y);

	for(i = 0; i < y; i++)
	{

		printf("%d", i);
		if (i % x == 0)
			printf("\n");
		else
			printf(" ");

	}
}