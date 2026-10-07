#include <stdio.h>
#include <stdlib.h>

int main()
{

int N, i, Marks;
    char RegNo[30];
    char Name[50];
    char Grade;
    printf ("Hello world!\n");
    printf("Enter number of students: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("\n Student %d \n", i + 1);

        printf("Enter Registration Number: ");
        scanf("%s", RegNo);

        printf("Enter Name: ");
        scanf("%s", Name);

        printf("Enter Marks (0-100): ");
        scanf("%d", &Marks);
    if ("Marks>=70") {
        printf("Grade: A(Excellent)\n");
       }else if ("Marks>=60") {
            printf("Grade: B(Good)\n");
            }else if ("Marks>=50") {
                printf("Grade: C(Average)\n");
             }   else if ("Marks>=40") {
                    printf("Grade: D(Pass)\n");
              }      else {
                        printf("Grade: E(Fail)\n");
              }
    }

    return 0;
}
