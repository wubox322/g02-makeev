#include <stdio.h>
#include  <stdlib.h>
#include <math.h>

int main()
{
    #define d 31
    float c[d];

    #define c_l 10.0f
    #define c_h 50.0f

    FILE *pf ;
    pf = fopen("text.txt", "w");

    for (int i = 0; i < d; i++)
    {
        c[i] = c_l + (c_h - c_l) * rand() / RAND_MAX;
        fprintf (pf, "%.2f\n", c[i]);
    }
    if (d % 7 > 0) fprintf(pf, "\n");
    fclose(pf);

    pf = fopen("text.txt", "r");
    for (int i = 0; i < d; i++)
    {
        fscanf (pf, "%f", &c[i]);
        printf("% 6.2f", c[i]);
        if (i % 7 == 6) printf("\n");        
    } 
    if (d % 7 > 0) printf("\n");
    fclose(pf);


    float cmin = c_h;
    float cmax = c_l;

    for (int i = 0; i < d; i++)
    {
        if (c[i] > cmax)
        cmax = c[i];
        if (c[i] < cmin)
        cmin = c[i];
    }

    /*int u;
    float a,b,t, r;
    scanf("%f", &t);

    #define ep 0.001f
    for (int i = 0; i < d; i++)
    { 
        if (fabsf(c[i]-t) < ep )
        u = i + 1;
    }*/


    printf("cmin = %.2f\n", cmin);
    printf("cmax = %.2f\n", cmax);
    //printf ("found ");
   // printf("%.2f", t); 
    //printf(" at ");
    //printf("%d\n", u);

    return 0;

}