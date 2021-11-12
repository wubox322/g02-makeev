#include <stdio.h>
#include <string.h>

int main()
{
char s[30];	//строка, которая вводится	
fgets(s, 30, stdin);	//ввод строки с клавиатуры

char *m = strchr(s, '\n');	//находит символ в строке
if(m != NULL) *m = '\0';
char s1[30];
int n[30];
for (int i=0;i<30;i++)
n[i]=0;
int j=1;
s1[0]=s[0];
n[0]=1;
int k=0;
while (s[j]!='\0')
{
  if (s[j]==s[j-1])
  {
    n[k]++;
  }
  else 
  {
    k++;
    s1[k]=s[j];
    n[k]++;
  }
  j++;
}
s1[k+1]='\n';
n[k+1]=0;
char *z = strchr(s1, '\n');	//находит символ в строке
if(z != NULL) *z = '\0';
int g=strlen(s1);    

for(int i=0;i<g;i++)
{
  if ((n[i]!=1)&&(n[i]!=0)&&(s1[i]!='\0'))
printf("%c%d",s1[i],n[i]);
else
printf("%c",s1[i]);
}
printf("\n");
for(int i=0;i<g;i++)
for(int j=0;j<n[i];j++)
printf("%c",s1[i]);
printf("\n");

return 0;
}