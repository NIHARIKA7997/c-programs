/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Student {
    char name[50];
    int marks[5]; // Assuming 5 subjects
};

void swapStudents(struct Student *s1, struct Student *s2) {
    struct Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    struct Student student1, student2;

    printf("Enter information for student 1:\n");
    printf("Enter student 1's name: ");
    scanf("%s", student1.name);

    printf("Enter marks for student 1 (5 subjects): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &student1.marks[i]);
    }

    printf("\nEnter information for student 2:\n");
    printf("Enter student 2's name: ");
    scanf("%s", student2.name);

    printf("Enter marks for student 2 (5 subjects): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &student2.marks[i]);
    }

    printf("\nStudent 1's information:\n");
    printf("Name: %s\nMarks: ", student1.name);
    for (int i = 0; i < 5; i++) {
        printf("%d ", student1.marks[i]);
    }

    printf("\n\nStudent 2's information:\n");
    printf("Name: %s\nMarks: ", student2.name);
    for (int i = 0; i < 5; i++) {
        printf("%d ", student2.marks[i]);
    }

    swapStudents(&student1, &student2);

    printf("\n\nAfter swapping:\n");
    printf("Student 1's information:\n");
    printf("Name: %s\nMarks: ", student1.name);
    for (int i = 0; i < 5; i++) {
        printf("%d ", student1.marks[i]);
    }

    printf("\n\nStudent 2's information:\n");
    printf("Name: %s\nMarks: ", student2.name);
    for (int i = 0; i < 5; i++) {
        printf("%d ", student2.marks[i]);
    }

    return 0;
}
