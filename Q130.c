/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main() {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    Student students[2] = {
        {"Asha", 101, 85.0},
        {"Ravi", 102, 92.0}
    };

    for (int i = 0; i < 2; i++) {
        fprintf(file, "Name: %s | Roll: %d | Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}