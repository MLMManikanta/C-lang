#include <stdio.h>
void main(){
int i=1,j;
printf("Enter the number which table want to print");
scanf("%d",j);

for(;i<=10;i++){
    printf("i=%d \t j=%d = %d",i,j,i*j);
    printf("\n");
}
    
}