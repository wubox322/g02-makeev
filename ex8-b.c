#include <stdio.h>
#include <stdlib.h>

int main()
{
	#define months 12

	int salary[months];
	float tax[months];

	#define salary_low 1000
	#define salary_high 5000

	int year_salary = 0;

	printf("Months ");

	int salary_max = 1000, salary_min = 5000;

	for (int i = 0; i < months; i++)
	{
		salary[i] = salary_low + rand() % (salary_high - salary_low + 1);
		year_salary += salary[i];
		printf("% 6d", (i + 1));
	}
	printf("\n");

	printf("Salary ");
	for (int i = 0; i < months; i++)
		printf("% 6d", salary[i]);
	printf("\n");

	float year_tax = 0.0f;
	printf("Tax    ");
	for (int i = 0; i < months; i++)
	{
		tax[i] = salary[i] * 0.02f;
		printf("% 6.1f", tax[i]);
		year_tax += tax[i];
	}
	printf("\n");

	float y_a = year_salary / (float) months;
	float y_avgt = year_tax / months;
	printf("deviat ");
	for (int i = 0; i < months; i++)
	{
		tax[i] = salary[i] * 0.02f;
		float e = tax[i] - y_avgt;
		printf("% 6.1f", e);
		year_tax += tax[i];
	}
	printf("\n");
	printf("\n");

	printf("year_sum = %d\n", year_salary);
	printf("year_avg = %.2f\n", y_a);
	printf("year_tax = %.2f\n", year_tax);
	printf("year_avg_tax = %.2f\n", y_avgt);

return 0;
}