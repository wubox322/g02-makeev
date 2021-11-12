#include <stdio.h>
#include <math.h>

double f (double x)
{
return -3.0 * cos(x);
}

int main()
{
double a, b;
printf("a, b: ");
scanf("%lf %lf", &a, &b);

double e;
printf("e: ");
scanf("%lf", &e);

printf("\n");

int step = 1;
//printf("step        c               fa              fc\n");
printf("step\t    c\t\t    fa\t\t    fc\t    abs(fc) >= e\n");

while(1)
{
    printf("%d\t", step);

double c = (a + b) / 2.0;
printf("%lf\t", c);

double fa = f(a);
printf("%lf\t", fa);
double fc = f(c);
printf("%lf\t", fc);

	if(fabs(fc) <= e)
	{
        printf("no\n");
		printf("x: %lf\n", c);
		printf("y: %lf\n", fc);
		break;
	}

	if(fa * fc > 0.0)
	{
		a = c;
        printf("yes\n");
	}
	else
	{
		b = c;
        printf("yes\n");
	}
    step++;
}
printf("step: %d\n", step);

return 0;
}