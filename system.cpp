#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

COORD coord = {0, 0};
void gotoxy(int x, int y) {
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct emp {
    char name[40];
    int age;
    float salary;
};

int main() {
    FILE *fp;
    struct emp e;
    char choice;
    long int recsize = sizeof(e);

    fp = fopen("EMP.DAT", "rb+");
    if (fp == NULL) {
        fp = fopen("EMP.DAT", "wb+");
        if (fp == NULL) {
            printf("Cannot open file\n");
            exit(1);
        }
    }

    while (1) {
        system("cls");
        gotoxy(30, 10); printf("1. Add Record");
        gotoxy(30, 12); printf("2. List Records");
        gotoxy(30, 14); printf("3. Exit");
        gotoxy(30, 16); printf("Enter your choice: ");
        fflush(stdin);
        choice = getchar();

        switch (choice) {
            case '1':
                fseek(fp, 0, SEEK_END);
                printf("\nEnter name, age, salary: ");
                scanf("%s%d%f", e.name, &e.age, &e.salary);
                fwrite(&e, recsize, 1, fp);
                break;

            case '2':
                rewind(fp);
                while (fread(&e, recsize, 1, fp) == 1)
                    printf("\n%s %d %.2f", e.name, e.age, e.salary);
                getchar();
                break;

            case '3':
                fclose(fp);
                exit(0);
        }
    }

    return 0;
}

