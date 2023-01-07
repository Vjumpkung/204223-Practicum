#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: ./sum-args num...\n");
        exit(1);
    }
    int sum = 0;
    for (int i = 0; i < argc; i++)
    {
        int x = atoi(argv[i]);
        sum += x;
    }
    printf("%d\n", sum);
    return 0;
}