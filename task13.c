#include<stdio.h>
int main()
{
    int submarks[5][3];
    int i,j,m,n;

    printf("enter marks of 5 student in 3 subject: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("\nstudent %d: \n",i+1);
        for ( j = 0; j < 3; j++)
        {
            printf("subject %d:", j+1);
            scanf("%d",&submarks[i][j]);
        }
    }
printf("\n displaying the marks\n");
for ( i = 0; i < 5; i++)
{
     printf("Student %d: ", i + 1);
     for ( j= 0; j< 3; j++)
     {
        printf("%d  ", submarks[i][j]);
     }
     printf("\n");
}
// Finding highest marks in each subject
    for (i = 0; i < 3; i++)
    {
        int highest = submarks[0][i]; // first student's mark in each subject

        for (j = 1; j < 5; j++)
        {
            if (submarks[j][i] > highest)
            {
                highest = submarks[j][i];
            }
        }

        if(i == 0)
            printf("\nHighest marks in Mathematics: %d\n", highest);
        else if(i == 1)
            printf("Highest marks in Physics: %d\n", highest);
        else
            printf("Highest marks in Computer Science: %d\n", highest);
    }

    return 0;
}