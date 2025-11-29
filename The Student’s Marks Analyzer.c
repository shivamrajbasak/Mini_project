#include<stdio.h>
int main()
{
    int n;
    float total=0, average;
    printf("enter the number of students");
    scanf("%d",&n);
    int marks[n];
    printf("enter marks");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
        total+= marks[i];
    }
    average=total/n;
    printf("total is %.2f \n",total);
    printf("average is %.2f",average);
return 0;
}