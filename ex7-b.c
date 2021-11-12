#include <stdlib.h>
#include <stdio.h>

int n;
#define m_max 100
int mark[m_max];

#define mmin 2
#define mmax 5

#define mpass 4.6f

float avg(int sum, int n)
{
	float sr = (float)sum / (float)n;
	return sr; 
}

int main()
{
printf("n: ");
scanf("%d", &n);
if(n > 100 || n <= 0)
{
    printf("error\n");
    return 0;
}

printf("mark: ");
for(int i = 0; i < n; i++)
{
    scanf("%d", &mark[i]);
}
printf("\n");

int sum = 0;
for(int i = 0; i < n; i++)
{
    sum += mark[i];
}
printf("sum: %d", sum);
printf("\n");

float sr;
sr = avg(sum, n);

printf("avg: %.1f\n", sr);
if(sr >= mpass) printf ("yes\n");
else printf("no\n");

    return 0;
}