#include <stdio.h>
#include <math.h>

double f (double x)
{
return -3.0 * cos(x);
}

int main()
{

FILE *file = fopen("extask04-c.txt", "w");

double a, b;
printf("a, b: ");
scanf("%lf %lf", &a, &b);

double e;
printf("e: ");
scanf("%lf", &e);

printf("\n");

int step = 1;
//printf("step        c               fa              fc\n");
fprintf(file, "step\t    c\t\t    fa\t\t    fc\t    abs(fc) >= e\n");

while(1)
{
    fprintf(file, "%d\t", step);

double c = (a + b) / 2.0;
fprintf(file, "%lf\t", c);

double fa = f(a);
fprintf(file, "%lf\t", fa);
double fc = f(c);
fprintf(file, "%lf\t", fc);

	if(fabs(fc) <= e)
	{
        fprintf(file, "no\n");
		fprintf(file, "x: %lf\n", c);
		fprintf(file, "y: %lf\n", fc);
		break;
	}

	if(fa * fc > 0.0)
	{
		a = c;
        fprintf(file, "yes\n");
	}
	else
	{
		b = c;
        fprintf(file, "yes\n");
	}
    step++;
}
fprintf(file, "step: %d\n", step);
fclose(file);
return 0;
}