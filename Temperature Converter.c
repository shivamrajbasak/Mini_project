#include<stdio.h>
int main()
{
    float f,c;
    printf("enter the temperature in celsius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in fahrenheit= %.2f",f);
return 0;
}