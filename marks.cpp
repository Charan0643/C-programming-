#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

void addStudents(FILE *fp, int n) {
    struct Student s;
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]%*c", s.name);  
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &s.marks);
        fwrite(&s, sizeof(s), 1, fp);
    }
}

void displayStudents(FILE *fp) {
    struct Student s;
    rewind(fp);
    printf("\nStudent Records:\n");
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        printf("Name: %s, Marks: %d\n", s.name, s.marks);
    }
}

int main() {
    FILE *fp;
    int choice, n;

    fp = fopen("students.dat", "ab+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    do {
        printf("\nStudent Marks File Manager\n");
        printf("1. Add Student Records\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("How many students to add? ");
                scanf("%d", &n);
                addStudents(fp, n);
                break;
            case 2:
                displayStudents(fp);
                break;
            case 3:
                fclose(fp);
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}

