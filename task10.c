#include<stdio.h>
int main()
{
    int days;
    printf("numbers of days");
    scanf("%d",&days);
    int exercise_times[days];
    printf("enter the times");
    for (int i = 0; i < days; i++)
    {
        scanf("%d",&exercise_times[i]);
    }
    for (int i = 0; i < days; i++)
    {
        printf("%d ",exercise_times[i]);
        
    
    }
    printf("\n");
    for (int i = days-1; i>=0; i--)
    {
        printf("%d ",exercise_times[i]);
    }
    
    

return 0;
}