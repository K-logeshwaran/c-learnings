#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

Student student_create()
{
    Student stud;
    stud.ID = 0;
    stud.Grade = '0';

    strcpy(stud.Name, "nill");
    printf("\nEnter Student details\n");
    printf("\nEnter Student id");
    scanf("%d", &(stud.ID));
    printf("\nEnter Student grade");
    scanf("%s", &(stud.Grade));
    printf("\nEnter Student name");
    scanf("%s", stud.Name);
    return stud;
}

// void student_free(Student *self)
// {
//     free(self->Name);
//     free(self);
// }

void student_print(Student self)
{
    printf("\nStudent Details..\n");

    printf("ID\t\tName\t\tGrade\n");
    printf("%d\t\t%s\t\t%c\n", self.ID, self.Name, self.Grade);
}

void studentS_print(Student *self, int len)
{
    printf("\nStudent Details..\n");

    printf("ID\t\tName\t\tGrade\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t\t%s\t\t%c\n", self[i].ID, self[i].Name, self[i].Grade);
    }
}

void studentS_fprint(Student *self, int len, FILE **fp)
{
    for (int i = 0; i < len; i++)
    {
        
        fprintf(*fp,"%d\t\t%s\t\t%c\n", self[i].ID, self[i].Name, self[i].Grade);
    }
}