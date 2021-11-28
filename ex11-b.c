#include <stdio.h>
#include <stdlib.h>

int main()
{
	#define rows 25
	#define cols 5

	int tab[rows][cols];

	#define mark0 2
	#define mark1 5

	for(int y = 0; y < rows; y++)
		for(int x = 0; x < cols; x++)
			tab[y][x] = mark0 + rand() % (mark1 - mark0 + 1);

	float avg[rows];
	float avg4[cols];	
	for(int y = 0; y < rows; y++)
	{
		int s = 0;
		for(int x = 0; x < cols; x++)
		{
			s += tab[y][x];
		}
		avg[y] = s / (float)cols;
	}

	printf("num");
	for(int x = 0; x < cols; x++)
	{
		printf("\t%d", x + 1);
	}

	printf("\tavg\n");

	for(int y = 0; y < rows; y++)
	{
		printf("%d", y + 1);
		for(int x = 0; x < cols; x++)
		{
			printf("\t%d", tab[y][x]);
		}
		printf("\t%.1f\n", avg[y]);
	}
	float e = 6;
	int ie = 0;
	for(int y = 0; y < cols; y++)
	{
		int s = 0;
		for(int x = 0; x < rows; x++)
		{
			s += tab[x][y];
		}
		avg4[y] = s / (float)rows;
		if(avg4[y]<e)
		{
			e=avg4[y];
			ie=y+1;
		}
	}
 	printf("wrost subject %d\n", ie);
	return 0;
}