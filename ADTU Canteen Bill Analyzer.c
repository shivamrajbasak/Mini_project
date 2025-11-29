#include <stdio.h>
int main() {
    int n, m;
    printf("Enter number of students (n): ");
    scanf("%d", &n);

    printf("Enter number of days (m): ");
    scanf("%d", &m);

    int bill[n][m];
    printf("Enter the bill amounts:\n");

    for (int i = 0; i < n; i++) 
    {
        printf("Student %d amounts: ", i + 1);
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &bill[i][j]);
        }
    }

    int studentTotal[n];
    int dayTotal[m];
    for (int i = 0; i < n; i++) studentTotal[i] = 0;
    for (int j = 0; j < m; j++) dayTotal[j] = 0;

    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
         {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Student %d total: Rs%d\n", i + 1, studentTotal[i]);
    }

    int maxDay = 0;
int maxValue = dayTotal[0];  

for (int j = 1; j < m; j++) 
{
    if (dayTotal[j] > maxValue) 
    {
        maxValue = dayTotal[j];
        maxDay = j;
    }
}

printf("Highest collection on Day %d\n", maxDay + 1);

    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) 
    {
        if (studentTotal[i] > maxSpend)
            maxSpend = studentTotal[i];
    }

    printf("Highest spender:\n");

for (int i = 0; i < n; i++) {
    if (studentTotal[i] == maxSpend) 
    {
        printf("Student %d\n", i + 1);
    }
}
    return 0;
}
