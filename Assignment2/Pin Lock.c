#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    printf("Hello world!\n");

    int Age;
    printf("Please enter your age: \n");
    scanf("%d", &Age);

    if (Age >= 18) {
        printf("Welcome \n");
    } else {
        printf("Exit \n");
    }

    int CorrectPin = 8900;
    int Userpin;
    int attempts = 3;
    int pinGranted = 0;

    while (attempts > 0) {
        printf("\nPlease enter your pin: \n");
        scanf("%d", &Userpin);

        if (Userpin > 9999) {
            printf("Pin must be 4 digits \n");
        } else if (Userpin < 1000) {
            printf("Please input 4 digits \n");
        } else {
            printf("Pin is 4 digits\n");
        }

        if (Userpin == CorrectPin) {
            printf("Access granted!\n");
            pinGranted = 1;
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Incorrect PIN. Remaining attempts: %d\n", attempts);
            } else {

                printf("\nSystem locked! Wait for 5 seconds...\n");
                for (int i = 5; i >= 1; i--) {
                    printf("%d...\n", i);
                    Sleep(1000);
                }
                printf("You can try again now.\n");
            }
        }
    }


    if (pinGranted) {
        int selectedOption;

        printf("\n=== Device Menu ===\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &selectedOption);

        switch (selectedOption) {
            case 1:
                printf("Door opened successfully.\n");
                break;
            case 2:
                printf("Username changed successfully.\n");
                break;
            case 3:
                printf("PIN changed successfully.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option selected.\n");
                break;
        }
    }

    return 0;
}
