#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    char email[50];
    float note;
};

void show_students(struct Student stdnts[100])
{
    for (int i = 0; i < 100; i++)
    {
        if (stdnts[i].name[0] != '\0')
        {
            printf("Name: %s, Email: %s, Note: %.2f\n", stdnts[i].name, stdnts[i].email, stdnts[i].note);
        }
    }
}

void add_student(struct Student stdnts[100], char name[50], char email[50], float note)
{
    struct Student new_student;
    strncpy(new_student.name, name, sizeof(new_student.name) - 1);
    new_student.name[sizeof(new_student.name) - 1] = '\0';
    strncpy(new_student.email, email, sizeof(new_student.email) - 1);
    new_student.email[sizeof(new_student.email) - 1] = '\0';
    new_student.note = note;

    for (int i = 0; i < 100; i++)
    {
        if (stdnts[i].name[0] == '\0')
        {
            stdnts[i] = new_student;
            break;
        }
    }
}

int main(void)
{
    printf("Hello, World!");
    struct Student stdnts[100] = {0};

    add_student(stdnts, "John Doe", "john.doe@example.com", 85.5);
    show_students(stdnts);
    return 0;
}