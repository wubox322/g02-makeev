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

while(1)
{
double c = (a + b) / 2.0;

double fa = f(a);
double fc = f(c);

	if(fabs(fc) <= e)
	{
		printf("x: %lf\n", c);
		printf("y: %lf\n", fc);
		break;
	}

	if(fa * fc > 0.0)
	{
		a = c;
	}
	else
	{
		b = c;
	}
}

return 0;
}