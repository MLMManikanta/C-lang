#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    switch (number1 > number2) {
        case 1:
            printf("Result: %d > %d", number1, number2);
            break;
        case 0:
            switch (number1 < number2) {
                case 1:
                    printf("Result: %d < %d", number1, number2);
                    break;
                case 0:
                    printf("Result: %d = %d", number1, number2);
                    break;
            }
            break;
    }

    return 0;
}