#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int n , s;
    int sim = 0;
    int *algebra;
    printf("Введите количество оценок ");
    scanf("%d" , &n);
    algebra = (int*) malloc(n*sizeof(int)) ;
    printf("Если вы хотите ввести сами наберите 1 , Если случайно другой любой символ\n");
    scanf("%d" , &s);
            if (s == 1)
        {
            for (int i=0 ; i<n ; i++)
                {
                    printf("algebra[%d]=" , i);
                    scanf("%d" , &algebra[i]);
                    sim += algebra[i];
                }
            float f= (float)sim / (float)n;
            printf("Средний балл = %.2f\n", f );
                if ( f < 4.6)
                printf("У вас не подходящий средний балл\n");
                else
                printf("У вас подходящий средний балл\n");
                free(algebra);
                return 0;
        }
            else
                {
                        for (int i=0 ; i<n ; i++)
                    {
                    algebra[i] = rand() % 5+2 ;
                    printf("algebra[%d]=" , i);
                    printf("%d\n" , algebra[i]);
                    sim += algebra[i];
                    }
                    float f= (float)sim / (float)n;
                    printf("Средний балл = %.2f\n", f );
                    if ( f < 4.6)
                    printf("У вас не подходящий средний балл\n");
                    else
                    printf("У вас подходящий средний балл\n");
                    free(algebra);
                    return 0;
                }
        
    

    


}