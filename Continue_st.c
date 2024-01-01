#include <stdio.h>

void main() {
    int a, i, sum = 0; 
    unsigned int n;
    printf("Count of numbers\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &a); 
        if(a<0){
     continue;
        }
        sum = sum + a;

    }
    printf("Sum = %d", sum);
}
