#include <stdio.h>
#include <string.h>


#define max_txt 256

int main()
{
    FILE *f = fopen("ex20-in.txt", "r");

    int m = 0;
    char p[max_txt];

    while(1)
    {
        char s[max_txt];
        if(fgets(s, max_txt, f) == NULL) break;

        char *c = strchr(s, '\n');
        if(c != NULL) *c = '\0';

        //puts(s);

        int l = strlen(s);
        printf("%s ", s);
        printf("%d\n", l);
        if(l > m)
        {
            m = l;
            strcpy(p, s);
        }
    }

    printf("\n");

    printf("str = %s\n", p);
    printf("len = %d\n", m);

    fclose(f);
    
    return 0;
}