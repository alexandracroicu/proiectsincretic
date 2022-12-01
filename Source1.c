#include<stdio.h>
#include<stdlib.h>

#define N 101

void afisare(int v[])
{
	int i;
	for (i = 0; i <= 100; i++)
		printf(" [%d] ", v[i]);
	printf("\n");
}

int main()
{
	int v[N], i, s, d;
	srand(time(NULL));
	for (i = 0; i <= 100; i++)
		v[i] = rand() % 1000;
	afisare(v);
	return 0;
}