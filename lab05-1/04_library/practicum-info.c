#include "practicum-1.0.0/include/practicum.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int t;
    if (argc <= 2)
    {
        fprintf(stderr, "Usage: %s type name\n", argv[0]);
        exit(1);
    }
    if (strcmp(argv[1], "lecturer") == 0)
    {
        t = practicum_get_lecturer_id(argv[2]);
    }
    else if (strcmp(argv[1], "topic") == 0)
    {
        t = practicum_get_topic_id(argv[2]);
    }
    else
    {
        fprintf(stderr, "Invalid type\n");
        exit(2);
    }
    if (t == -1)
    {
        fprintf(stderr, "Name not found\n");
        exit(3);
    }
    printf("%d\n", t);
    return 0;
}