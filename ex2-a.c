#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define max_lastname 50

#define num_marks 3

#define mark_min 2
#define mark_max 5

struct element
{
    char lastname[max_lastname];
    int marks[num_marks];

    struct element *prev;
    struct element *next;

};



struct element *first = NULL;
struct element *last = NULL;


int main()
{
    FILE *f = fopen("ex2-a.txt", "r");
    while (1)
    {
        char lastname[max_lastname];
        if (fscanf(f, "%s", lastname) != 1) break;

        struct element *e = (struct element *) malloc(sizeof(struct element));
        if (last == NULL)
        {
            e->prev = NULL;
            e->next = NULL;
            first = e;
            last = e;
        }
        else
        {
            last->next = e;
            e->prev = last;
            e->next = NULL;
            last = e;
        }
        strcpy(e->lastname, lastname);
        for (int i = 0; i < num_marks; i++)
        e->marks[i] = mark_min + rand() % (mark_max - mark_min + 1);

    }
    fclose(f);

    struct element *current = first;
    while (current != NULL)
    {
        printf("%s", current->lastname);
        for (int i = 0; i < num_marks; i++)
            printf("%d", current->marks[i]);
        printf("\n");

        current = current->next;
    }
    printf("\n");

    current = last;
    while (current != NULL)
    {
        printf("%s", current->lastname);
        for (int i = 0; i < num_marks; i++)
            printf("%d", current->marks[i]);
        printf("\n");

        current = current->prev;
    }

    return 0;

}