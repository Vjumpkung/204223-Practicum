#include <stdio.h>

// การประกาศฟังก์ชันสามารถละชื่อพารามิเตอร์เอาไว้ได้
int max_of_three(int, int, int);

int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The maximum value is %d\n", max_of_three(a, b, c));
}

int max_of_three(int a, int b, int c)
{
    int maxx = -1e18;
    if (a > maxx)
    {
        maxx = a;
    }
    if (b > maxx)
    {
        maxx = b;
    }
    if (c > maxx)
    {
        maxx = c;
    }
    return maxx;
}