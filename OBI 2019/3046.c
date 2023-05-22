#include <stdio.h>

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int soma = 0;
	
	for (int i = 1;i < N+2;i++)
		soma +=i;
		
	printf("%d\n",soma);
	
	return 0;
}