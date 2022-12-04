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

void sortare_bubblesort(int v[])
{
	int i, k, aux;
	do
	{
		k = 1;
		for (i = 0; i <= (100 - 1); i++)
			if (v[i] > v[i + 1])
			{
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				k = 0;
			}
	} while (!k);
}

int main()
{
	int v[N], i, s, d;
	srand(time(NULL));
	for (i = 0; i <= 100; i++)
		v[i] = rand() % 1000;
	afisare(v);
	printf("\nSortarea bubble sort este: ");
	sortare_bubblesort(v);
	afisare(v);
	return 0;
}