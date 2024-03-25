#include <stdio.h>
#include <stdlib.h>
#include "student.h"
int main()
{
    FILE *fp = fopen("data2.txt", "a+");
    fprintf(fp,"ID\t\tName\t\tGrade\n");
    if (!fp)
    {
        printf("File cant open\n");
        exit(1);
    }
    Student students[3];
    for (int i = 0; i < 3; i++)
    {
        students[i] = student_create();
    }

    for (int i = 0; i < 3; i++)
    {
        student_print(students[i]);
    }
    printf("\n%p,%d", students, students);
    studentS_print(students, 3);
    studentS_fprint(students,3,&fp);
    char buffer[100];
    fgets(buffer,100,fp);
    printf("%s",buffer);
    fclose(fp);

    return 0;
}