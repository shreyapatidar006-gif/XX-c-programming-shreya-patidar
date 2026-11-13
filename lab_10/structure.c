#include <stdio.h>

struct student
{
    int roll;
    int marks;
};

int main()
{
    struct student s1;

    s1.roll = 101;
    s1.marks = 85;

    printf("Student Details\n");

    printf("Roll Number = %d\n", s1.roll);
    printf("Marks = %d\n", s1.marks);

    return 0;
}
