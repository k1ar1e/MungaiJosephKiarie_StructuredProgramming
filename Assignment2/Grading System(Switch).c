#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N, i, Marks;
    char RegNo[30];
    char Name[50];

    printf("Enter number of students: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Registration Number: ");
        scanf("%s", RegNo);

        printf("Enter Name: ");
        scanf("%s", Name);

        printf("Enter Marks (0-100): ");
        scanf("%d", &Marks);


        switch (Marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:
                printf("Grade: A (Excellent)\n");
                break;
            case 6:
                printf("Grade: B (Good)\n");
                break;
            case 5:
                printf("Grade: C (Average)\n");
                break;
            case 4:
                printf("Grade: D (Pass)\n");
                break;
            default:
                printf("Grade: E (Fail)\n");
                break;
        }


        if (Marks >= 40) {
            printf("Status: PASS\n");
        } else {
            printf("Status: FAIL\n");
        }
    }

    return 0;
}
