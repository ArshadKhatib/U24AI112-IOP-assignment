/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).*/

#include <stdio.h>
#include <stdlib.h>

int marks_check(int number) {
    if (number>200 || number<0) {
        printf("Invalid value...\n CHEATING... This program won't continue...");
        return 1;
    }
}

int main() {
    int marks[10][5],total_marks[10];
    printf("This program will list out the students which are passed..\nUser needs to input the marks of 10 students(out of 200 marks)\n");
    for (int i=0;i<10;i++) {
        printf("For Roll number %d",i+1);
        for (int j=0;j<5;j++){
        printf("\nMarks of subject:",j+1);
        scanf("%d",&marks[i][j]);
        if (marks_check(marks[i][0])==1) {
            return 0;
        }
        }
    }
    printf("\n");
    for (int i=0;i<10;i++) {
        total_marks[i] = 0;
        for (int j=0;j<5;j++){
            total_marks[i] += marks[i][j];
        }
        if (total_marks[i]>=500) {
            printf("roll number %d her passed with %d total marks",i+1,total_marks[i]);
        }
    }

    return 0;
}