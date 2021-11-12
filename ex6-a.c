#include <stdio.h>
#include <stdlib.h>

#define pmin 740
#define pmax 780
#define pnorm 760

int main()
{
int n;
printf("Введите количество дней: ");
scanf("%d", &n);

int pressure[n];

printf("arr: ");
for(int i = 0; i < n; i++)
{
	pressure [i] = pmin + rand() % (pmax - pmin + 1);
	printf("%d ", pressure[i]);
}
printf("\n");

int below = 0;  //ниже нормы
int exact = 0;  // нориа
int above = 0;  //выше нормы

for(int i = 0; i < n; i++)
{
	if(pressure[i] < pnorm) below++;	
	if(pressure[i] == pnorm) exact++;	
	if(pressure[i] > pnorm) above++;	
}

printf("below: %d\n", below);
printf("exact: %d\n", exact);
printf("above: %d\n", above);

return 0;
}

//cat test.txt | ./extask06-a послать данные из файла в программу