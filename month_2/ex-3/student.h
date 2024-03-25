#ifndef STUDENT_H

#define STUDENT_H

// including their name, ID, and grades, using file handling for persistence.

typedef struct
{
    char *Name;
    unsigned int ID;
    char Grade;
} Student;

Student student_create();
//void student_free(Student self);
void studentS_print(Student *self,int len);
void student_print(Student self);
void studentS_fprint(Student *self, int len,FILE **fp);
#endif