#include <stdio.h>

struct Student{
    char name[10];
    int roll;
    int marks[5];
}s;


int main()
{
    int i;
    printf("Enter the name:");
    scanf("%s", &s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    for(i=0;i<5;i++)
    {
    printf("Enter marks in subject %d: ", i+1);
    scanf("%d", &s.marks[i]);
    }
    printf("Name:%s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    for (i=0;i<5;i++)
    {
    printf("Marks obtained in subject %d are %d.\n", i+1, s.marks[i]);
    }
    return 0;
}
