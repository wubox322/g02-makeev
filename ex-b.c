#include <stdio.h>
#include <stdlib.h>

int main()
{
	#define rows 10
	#define cols 5

	int tab[rows][cols];

	#define mark0 1
	#define mark1 10

	for(int y = 0; y < rows; y++)
		for(int x = 0; x < cols; x++)
			tab[y][x] = mark0 + rand() % (mark1 - mark0 + 1);

	float avg[rows];	
	for(int y = 0; y < rows; y++)
	{
		int s = 0;
		for(int x = 0; x < cols; x++)
		{
			s += tab[y][x];
		}
		avg[y] = s / (float)cols;
	}
  int SON = 0 ;
  float BO = avg[0];
  for(int q = 1; q < rows; q++ )
  {
    if (BO < avg[q])
    {
      BO = avg[q];
      SON = q+1;
    }
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
printf("Num of best sportsmen: %d\n", SON);
return 0;
}