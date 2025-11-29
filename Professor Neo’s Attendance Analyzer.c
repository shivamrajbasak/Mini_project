#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of student");
    scanf("%d",&n);
    int attendence[n];
    int present=0, absent=0;
    printf("enter the attendence ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&attendence[i]);
        if (attendence[i]==1)
        {
            present++;
        }
        else
        {
            absent++;
        }
    }
    printf("present= %d\n",present);
    printf("abesnt= %d",absent);
return 0;
}