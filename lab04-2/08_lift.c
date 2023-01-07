#include <stdio.h>

int main()
{
    int n;
    printf("Enter the maximum weight in kg: ");
    scanf("%d", &n);
    int temp;
    int count = 0;
    int total = 0;
    while (total < n)
    {
        printf("Enter passenger's weight in kg: ");
        scanf("%d", &temp);
        total += temp;
        if (total > n)
        {
            break;
        }
        count++;
    }
    printf("The elevator can carry %d passenger(s)\n", count);
    return 0;
}