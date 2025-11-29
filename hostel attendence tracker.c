#include <stdio.h>

int main()
 {
    int A[10][7];
    int studentTotal[10] = {0};
    int dayTotal[7] = {0};

    
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 7; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 7; j++) 
        {
            studentTotal[i] += A[i][j]; 
            dayTotal[j] += A[i][j];     
        }
    }

    int maxStudent = 0;
    int maxAttendance = studentTotal[0];

    for (int i = 1; i < 10; i++) {
        if (studentTotal[i] > maxAttendance) {
            maxAttendance = studentTotal[i];
            maxStudent = i;
        }
    }

    int minDay = 0;
    int minAttendance = dayTotal[0];

    for (int j = 1; j < 7; j++) {
        if (dayTotal[j] < minAttendance) {
            minAttendance = dayTotal[j];
            minDay = j;
        }
    }

    
    printf("Weekly Attendance Summary\n");
    printf("Total Present Days:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, studentTotal[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", 
           maxStudent + 1, maxAttendance);

    printf("\nDay with Lowest Overall Attendance: Day %d\n", minDay + 1);

    return 0;
}
 }
