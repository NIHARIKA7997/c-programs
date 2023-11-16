/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    int marks[5]; // Assuming 5 subjects
};

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Create an array of student structures
    struct Student students[numStudents];

    // Input student information and marks
    for (int i = 0; i < numStudents; i++) {
        printf("Enter student %d's name: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks for student %d (5 subjects): ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculate and print the average marks for each student
    for (int i = 0; i < numStudents; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += students[i].marks[j];
        }
        double average = (double)sum / 5.0;
        printf("%s's average marks: %f\n", students[i].name, average);
    }

    return 0;
}
