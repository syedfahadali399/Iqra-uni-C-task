#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s1;
    struct Student *ptr;

    ptr = &s1;  

    printf("Enter student name: ");
    scanf(" %[^\n]", ptr->name);  // Read string with spaces

    printf("Enter roll number: ");
    scanf("%d", &ptr->rollNo);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->rollNo);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}