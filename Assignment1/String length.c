#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Hello world!\n");
    char name[50];
    int length;
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Hello, %s\n", name);
    length = strlen(name);
    printf("result: %d\n", length);
    return 0;
}
