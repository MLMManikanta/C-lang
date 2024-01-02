#include <stdio.h>
void main() {
int i,j,s;
printf("Enter lenght of the square \n");
scanf("%d",&s);
for(i=1;i<=s;i++){
    for(j=1;j<=s;j++){
    printf("*");
}
  printf("\n");
}
}