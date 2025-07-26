#include <stdio.h>

int main() {
    int age;
    float gpa;
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("\nName: %s\nAge: %d\nGPA: %.2f\n", name, age, gpa);

    return 0;
}
