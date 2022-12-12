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

void sortare_ShellSort(int v[])
{
	int h[3] = { 3,2,1 };
	int m, i, j, aux, k;
	for (m = 0; m < 3; m++)
	{
		k = h[m];
		for (i = k; i < N; i++)
		{
			aux = v[i];
			j = i - k;
			while (v[j] > aux && j >= 0)
			{
				v[j + k] = v[j];
				j = j - k;
			}
			v[j + k] = aux;
		}	
	}
}

void quicksort(int v[], int s, int d)
{
	
	int i, j, aux, x;
	x = v[(s + d) / 2];
	i = s; j = d;
	do
	{
		while (v[i] < x) i++;
		while (v[j] > x) j--;
		if (i <= j)
		{
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
			//afisare(v, N);
		}
	} while (i <= j);
	if (s < j) quicksort(v, s, j);
	if (d > i) quicksort(v, i, d);
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
	printf("\nSortarea SHELL sort este: ");
	sortare_ShellSort(v);
	afisare(v);
	printf("\nSortarea Quick sort este: ");
	quicksort(v, 0, N-1);
	afisare(v);
	return 0;
}
//once again here//