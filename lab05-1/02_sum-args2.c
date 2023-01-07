#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: ./sum-args2 num...\n");
        exit(1);
    }
    char *format_str = getenv("FORMAT");
    int format_enable = format_str != NULL;
    int sum = 0;
    for (int i = 0; i < argc; i++)
    {
        int x = atoi(argv[i]);
        sum += x;
    }
    if (format_enable)
    {
        printf(format_str, sum);
        printf("\n");
    }
    else
        printf("%d\n", sum);
    return 0;
}