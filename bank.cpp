#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    int acc_no;
    char name[50];
    float balance;
};

void createAccount(FILE *fp) {
    struct Account acc;
    printf("Enter Account Number: ");
    scanf("%d", &acc.acc_no);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);
    printf("Enter initial balance: ");
    scanf("%f", &acc.balance);
    fwrite(&acc, sizeof(acc), 1, fp);
    printf("Account Created Successfully.\n");
}

void displayAccounts(FILE *fp) {
    struct Account acc;
    rewind(fp);
    printf("Account Number\tName\t\tBalance\n");
    while (fread(&acc, sizeof(acc), 1, fp) == 1) {
        printf("%d\t\t%s\t\t%.2f\n", acc.acc_no, acc.name, acc.balance);
    }
}

void checkBalance(FILE *fp, int acc_no) {
    struct Account acc;
    rewind(fp);
    while (fread(&acc, sizeof(acc), 1, fp) == 1) {
        if (acc.acc_no == acc_no) {
            printf("Balance for account %d: %.2f\n", acc_no, acc.balance);
            return;
        }
    }
    printf("Account Number %d not found.\n", acc_no);
}

int main() {
    FILE *fp;
    int choice, acc_no;

    fp = fopen("accounts.dat", "ab+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    do {
        printf("\nBank Account Management\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(fp);
                break;
            case 2:
                displayAccounts(fp);
                break;
            case 3:
                printf("Enter account number to check balance: ");
                scanf("%d", &acc_no);
                checkBalance(fp, acc_no);
                break;
            case 4:
                fclose(fp);
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
