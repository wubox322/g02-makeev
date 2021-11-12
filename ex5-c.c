#include <stdio.h>
#include <stdlib.h>

int a1, b1;
int a2, b2;
int a3, b3;
void input1()
{
	printf("[1] a|b: ");
	scanf("%d %d", &a1, &b1);
}

void input2()
{
	printf("[2] a|b: ");
	scanf("%d %d", &a2, &b2);
}

void print()
{
	printf("[1]: %d / %d\n", a1, b1);
	printf("[2]: %d / %d\n", a2, b2);
}

void add()
{
	 a3 = a1 * b2 + a2 * b1;
	 b3 = b1 * b2;
	printf("%d / %d", a3, b3);
}

void subtruct()
{
	 a3 = a1 * b2 - a2 * b1;
	 b3 = b1 * b2;
	printf("%d / %d", a3, b3);
}

void multiplication()
{
     a3 = a1 * a2;
     b3 = b1 * b2;
    printf("%d / %d", a3, b3);
}

void division()
{
     a3 = a1 * b2;
     b3 = b1 * a2;
    printf("%d / %d", a3, b3);
}

void reduction()
{int c=5;
int a,b;
a=a3;
b=b3;
   
    while(c!=0)
	{if (a>=b){
	 c =a-b;
	 if (c!=0) 
	 a=c;}
else {a=a+b;
b=a-b;
a=a-b;
}
	    
	}
b3=b3/b;
a3=a3/b;

printf("%d / %d", a3, b3);}
int main()
{
int choice;
do
{
	printf("\n");
	printf("0 - exit\n");
	printf("1 - input 1\n");
	printf("2 - input 2\n");
	printf("3 - print\n");
	printf("4 - add\n");
	printf("5 - subtract\n");
    printf("6 - multiplication\n");
    printf("7 - division\n");
	printf("8 - reduction\n");
	printf("choice: ");

	scanf("%d", &choice);
	printf("\n");

	switch(choice)
	{
		case 1: input1(); break;
		case 2: input2(); break;
		case 3: print(); break;
		case 4: add(); break;
		case 5: subtruct(); break;
        case 6: multiplication(); break;
        case 7: division(); break;
case 8: reduction();break;
	}
    printf("\n");

}
while(choice != 0);

return 0;
}
