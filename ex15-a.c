#include <stdio.h>
#include <string.h>

struct record
{
    char os[32];
    int virt;
    int phy;
    int price;
};

#define rows 3
struct record tab[rows];

int  main()
{
    char tmp[32];

    for(int i = 0; i < rows; i++)
    {
        printf("[record %d]\nos, virt, phy, price: ", i);
        scanf("%s %d %d %d", tab[i].os, &tab[i].virt, &tab[i].phy, &tab[i].price);
        printf("\n");
    }

    for(int i = 0; i < rows; i++)
    {
        printf("%s\t%d\t%d\t%d\n", tab[i].os, tab[i].virt, tab[i].phy, tab[i].price);
    }

    char os[32];
    printf("search: ");
    scanf("%s", os);
    printf("\n");

    int n = 0;

    for(int i = 0; i < rows; i++)
    {
        if(strcmp(tab[i].os, os) == 0)
        {
            printf("virt: %d\n", tab[i].virt);
            printf("phy: %d\n", tab[i].phy);
            n++;
        }
    }
    if(n < 1) printf("not found!\n");

    return 0;
}