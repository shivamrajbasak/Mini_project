#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
if (num % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
 if (num % 5 == 0)
    {
        printf("divisible by 5\n");
    }
    else
    {
        printf("not divisible by 5\n");
    }

    return 0;
}
