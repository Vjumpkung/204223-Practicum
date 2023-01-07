#include "banner.h"
#include <stdio.h>
#include <string.h>

void banner_vertical(char *text)
{
    printf("+---+\n");
    for (int i = 0; i < strlen(text); i++)
    {
        printf("| %c |\n", text[i]);
    }
    printf("+---+\n");
}

void banner_horizontal(char *text)
{
    printf("+");
    for (int i = 0; i < strlen(text) + 2; i++)
    {
        printf("-");
    }
    printf("+\n");
    printf("| ");
    printf("%s", text);
    printf(" |\n");
    printf("+");
    for (int i = 0; i < strlen(text) + 2; i++)
    {
        printf("-");
    }
    printf("+\n");
}