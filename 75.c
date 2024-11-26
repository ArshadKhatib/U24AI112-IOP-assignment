//The annual examination results of 10 students are tabulated as follows:
#include <stdio.h>
#include <stdlib.h>

int marks_check(int number) {
    if (number>100 || number<0) {
        printf("Invalid value...\n CHEATING... This program won't continue...");
        return 1;
    }
}



int main() {
    int kill_program = 0,max_total_marks = -32000,topper,physics_top_marks = -32000,chemistry_top_marks = -32000,mathc_top_marks = -32000;
    int marks[10][3],total_marks[10],physics_topper,chemistry_topper,maths_topper;
    printf("This program will input the marks of students of roll number 1 to 10 (Out of hundred)\n");
    for (int i=0;i<10;i++) {
        printf("For Roll number %d\nMarks of Physics:",i+1);
        scanf("%d",&marks[i][0]);
        kill_program = marks_check(marks[i][0]);
        if (kill_program==1) {
            return 0;
        }
        printf("Marks of Chemistry:");
        scanf("%d",&marks[i][1]);
        kill_program = marks_check(marks[i][1]);
        if (kill_program==1) {
            return 0;
        }
        printf("Marks of maths:");
        scanf("%d",&marks[i][2]);
        kill_program = marks_check(marks[i][2]);
        if (kill_program==1) {
            return 0;
        }
    }

    printf("Rollno.\tTotal marks\n");
    for(int i=0;i<10;i++) {
        total_marks[i] = marks[i][0]+marks[i][1]+marks[i][2];
        max_total_marks = (max_total_marks>total_marks[i])? max_total_marks : total_marks;
        physics_top_marks = (physics_top_marks>marks[i][0])? physics_top_marks : marks[i][0];
        chemistry_top_marks = (chemistry_top_marks>marks[i][1])? chemistry_top_marks : marks[i][1];
        mathc_top_marks = (mathc_top_marks>marks[i][2])? mathc_top_marks : marks[i][2];
        printf("%d\t%d\n",i+1,total_marks[i]);
    }

    for(int i=0;i<10;i++) {
        if (max_total_marks == total_marks[i]) {
            int topper = i;
            topper +=1;
        }
        if (physics_top_marks == marks[i][0]) {
            physics_topper = i;
            physics_topper +=1;
        }
        if (chemistry_top_marks = marks[i][1]) {
            physics_topper = i;
            physics_topper +=1;
        }
        if (mathc_top_marks == marks[i][2]) {
            maths_topper = i;
            maths_topper +=1;
        }

    }
    
    printf("The hightest marks scored is %d and scored by roll number %d.\n",max_total_marks,topper);
    printf("The hightest marks scored in Physics is %d and scored by roll number %d.\n",physics_top_marks,physics_topper);
    printf("The hightest marks scored in Chemistry is %d and scored by roll number %d.\n",chemistry_top_marks,chemistry_topper);
    printf("The hightest marks scored in maths is %d and scored by roll number %d.\n",mathc_top_marks,maths_topper);

    return 0;
}