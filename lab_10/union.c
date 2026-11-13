#include <stdio.h>

union student
{
    int roll;
    int marks;
};

int main()
{
    union student s1;

    s1.roll = 101;

    printf("Roll Number = %d\n", s1.roll);

    s1.marks = 85;

    printf("Marks = %d\n", s1.marks);

    return 0;
}
