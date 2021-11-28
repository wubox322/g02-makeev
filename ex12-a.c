#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define n_max 10   //колонки
    #define m_max 10   //строки

	int n, m;
	printf("n (cols), m(rows): ");
	scanf("%d %d", &n, &m);

	/*if(n < 0 || n > = n_max || ...)
	{
		puts("error);
	}
	else
	{
	
	}*/

	int a[m_max][n_max];
	int b[m_max][n_max];

	int c1[m_max][n_max];
	int c2[m_max][n_max];

    #define vmin 10
    #define vmax 20

	for(int y = 0; y < m; y++)
		for(int x = 0; x < n; x++)
		{
			a[y][x] = vmin + rand() % (vmax - vmin + 1);
			b[y][x] = vmin + rand() % (vmax - vmin + 1);
		}

	for(int y = 0; y < m; y++)
		for(int x = 0; x < n; x++)
		{
			c1[y][x] = a[y][x] + b[y][x];
			c2[y][x] = a[y][x] - b[y][x];
		}

	char spc[100];
	for(int i = 0; i < 100; i++)
		spc[i] = ' ';
	spc[n * 4 / 2] = 0;

	printf("%sa%s\t%sb\n", spc, spc, spc);

	for(int y = 0; y < m; y++)
	{
		for(int x = 0; x < n; x++)
			printf("% 4d", a[y][x]);

		printf("\t");

		for(int x = 0; x < n; x++)
		{
			printf("% 4d", b[y][x]);
		}
		printf("\n");
	}

	printf("\n%sc1%s\t%sc2\n", spc, spc, spc);

	for(int y = 0; y < m; y++)
	{
		for(int x = 0; x < n; x++)
			printf("% 4d", c1[y][x]);

		printf("\t");

		for(int x = 0; x < n; x++)
		{
			printf("% 4d", c2[y][x]);
		}
		printf("\n");
	}

return 0;
}