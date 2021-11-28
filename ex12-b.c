#include <stdio.h>
#include <stdlib.h>
int n, m;
#define n_max 10   //колонки
#define m_max 10   //строки
	int a[m_max][n_max];
	int b[m_max][n_max];

	int c1[m_max][n_max];
	int c2[m_max][n_max];

    #define vmin 10
    #define vmax 20
void input()
{
		for(int y = 0; y < m; y++)
		for(int x = 0; x < n; x++)
		{
			a[y][x] = vmin + rand() % (vmax - vmin + 1);
			b[y][x] = vmin + rand() % (vmax - vmin + 1);
		}
}
void output()
{
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
}
void raschet()
{
	for(int y = 0; y < m; y++)
		for(int x = 0; x < n; x++)
		{
			c1[y][x] = a[y][x] + b[y][x];
			c2[y][x] = a[y][x] - b[y][x];
		}	
}
int main()
{
    
	printf("n (cols), m(rows): ");
	scanf("%d %d", &n, &m);

int choice ;
do
{
	printf("\n");
	printf("0 - exit\n");
	printf("1 - input \n");
	printf("2 - raschet \n");
	printf("3 - output \n");
	printf("choice: ");

	scanf("%d", &choice);
	printf("\n");

	switch(choice)
	{
		case 1: input(); break;
		case 2: raschet(); break;
		case 3: output(); break;
    printf("\n");
	}
}
while(choice != 0);
return 0;
}
