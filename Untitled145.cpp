#include <stdio.h>
#include <string.h>

// Define structure
struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // to read string with spaces

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n---- Student Records ----\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No : %d\n", students[i].rollNo);
        printf("Name    : %s\n", students[i].name);
        printf("Age     : %d\n", students[i].age);
        printf("Marks   : %.2f\n", students[i].marks);
    }

return 0;
}
