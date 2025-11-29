#include<stdio.h>
int main()
{
    int n;
    printf("how many number");
    scanf("%d",&n);
    int num[n];
    printf("enter the numbers \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    int positive = 0, negative =0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>0)
        {
            positive ++;
        }
       else if (num[i]<0)
        {
            negative ++;
        }
        else
        zero ++;
    }
    printf("positive = %d",positive);
    printf("\nnegative = %d",negative);
    printf("\nzero= %d",zero);
    
    
return 0;
}