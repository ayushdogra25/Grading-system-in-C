#include <stdio.h>
#include <stdlib.h> //standard library header
// Screen clear karne ke liye system("cls") ka use

// Function jo diye gaye marks ke aadhar par grade ki calculation aur display karta hai
void calculateGrade(int marks) {
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    }
    else if (marks >= 50 && marks < 60) {
        printf("Grade: E\n");
    }
    else if (marks >= 0 && marks < 50) {
        printf("Grade: F\n");
    }
    else {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }
}

// Function jo main menu display karta hai
void displayMenu() {
    printf("\n=== Grading System ===\n");
    printf("1. Calculate Grade\n");
    printf("2. Clear Screen\n");
    printf("3. Exit\n");
    printf("Please choose an option: ");
}

int main() {
    int option;
    int marks;
    char continueInput;

    do {
        displayMenu();  // Menu dikhane ke liye
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter the marks (0-100): ");
                scanf("%d", &marks);
                calculateGrade(marks);  // Grade calculate karne ke liye
                break;

            case 2:
                system("cls");  // Screen ko clear karne ke liye
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                exit(0);  // Program exit karne ke liye

            default:
                printf("Invalid option. Please choose a valid option.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &continueInput);  // User se puchne ke liye ki continue karna hai ya nahi

    } while (continueInput == 'y' || continueInput == 'Y');  // Jab tak user 'y' input karta hai tab tak loop chalega

    printf("Thank you for using the grading system!\n");
    return 0;
}
