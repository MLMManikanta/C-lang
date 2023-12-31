#include <stdio.h>

void main() {
    int i, n, a;
    printf("From which number do you want to start \n");
    scanf("%d", &i);
    printf("How many numbers do you want to print  \n ");
    scanf("%d", &n);
    a = i;
printf("The output: \n");
    while (a <= i + n) {
        printf("%d \n", a);
        a++;
    }
}
