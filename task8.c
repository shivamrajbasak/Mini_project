#include<stdio.h>
int main()
{
    int n;
    printf("how many number");
    scanf("%d",&n);
    int num[n];
    int i;
    printf("enter the number: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);

    }
    int largest = num[0];
    for ( i = 1 ; i < n; i++)
    {
       if (num[i]>largest)
       {
        largest=num[i];
       }  
    }
    

    int smallest = num[0];
    for (i = 1 ; i < n; i++)
    {
       if (num[i]<smallest)
       {
        smallest=num[i];
       }  
    }
     printf("largest %d \n",largest); 
     printf("smallest %d \n",smallest); 
    
    
return 0;
}