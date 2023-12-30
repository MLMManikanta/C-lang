#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, n1, n2;

    printf("Enter the value of n1 (starting point): ");
    scanf("%d", &n1);
    printf("Enter the value of n2 (ending point): ");
    scanf("%d", &n2);
    printf("Enter the number whose table you want to print: \n");
    scanf("%d", &j);

    for (int i = n1; i <= n2; ++i) {
        printf("%d * %d = %d \n", i, j, j * i);
    }

    getch();
}