#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int roll_no;
    char name[50];
    int T_marks;

}Student;

int main()
{
    int N;
    Student *strpt;
    Student students[50];

    printf("Enter the number of students: \n");
    scanf("%d",&N);

    FILE *txt = fopen("LNMIITSTUDENT.JAVA","wb");
    for (int i = 0; i < N; i++)
    {
        printf("Enter the Roll no: \n");
        scanf("%d", &students[i].roll_no);
        printf("Enter the name: \n");
        scanf(" %[^\n]s", &students[i].name);
        printf("Enter the Total marks: \n");
        scanf("%d", &students[i].T_marks);
    }
    fclose(txt);

    FILE *text = fopen("LNMIITSTUDENT.JAVA","rb");
    printf("\n--------Student Details-------------\n");
    printf("Roll No.\tName\t\tMarks\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t\t%s\t\t%d\n",students[i].roll_no,students[i].name,students[i].T_marks);
    }
    printf("\n------------------------------------\n");
    fclose(text);
    
    return 0;
}