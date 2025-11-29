#include<stdio.h>
int main()
{
    float breath,length,area, perimeter;
    printf("enter the breath ");
    scanf("%f",&breath);
    printf("enter the length");
    scanf("%f",&length);
    printf("area is %.1f \n", 2*(length+breath));
    printf("Perimete is %.1f",length*breath);
return 0;
}