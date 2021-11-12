#include <stdio.h>
#include <stdlib.h>

#define max_ans 5
#define max_txt 100
char name[25];
char lastname[25];
int grnumber;
struct quest
{
int nans;
int corr;
char txt[max_txt];
char ans[max_ans][max_txt];
};

#define max_quest 10
struct quest test[max_quest];

int main()
{
FILE *f = fopen("ex19-in.txt", "r");

int nq;
printf("Enter your name, lastname and group number\n");
fscanf(f, "%d", &nq);

for(int i = 0; i < nq; i++)
{
	fscanf(f, "%d %d\n", &test[i].nans, &test[i].corr);
	fgets(test[i].txt, max_txt, f);
	for(int j = 0; j < test[i].nans; j++)
	{
		fgets(test[i].ans[j], max_txt, f);
	}
}

fclose(f);
FILE *h = fopen("teststud.txt", "w");
fgets(name,50,stdin);
fgets(lastname,50,stdin);

scanf("%d",&grnumber);
fprintf(h, "%s", name);
fprintf(h, "%s", lastname);
fprintf(h, "%d\n", grnumber);
for(int i = 0; i < nq; i++)
{
	puts(test[i].txt);
	for(int j = 0; j < test[i].nans; j++)
		puts(test[i].ans[j]);

	int c;
	scanf("%d", &c);
fprintf(h, "%d\n", c);
	if(c == test[i].corr)     fprintf(h, "correct!\n");
	else fprintf(h, "wrong!\n");
}
fclose(h);
return 0;
}