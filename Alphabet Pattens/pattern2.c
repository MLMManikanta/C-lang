#include <stdio.h>
void main(){
    int i,j,n;
   printf("enter number of rows you want to print : "); 
   scanf("%d",&n); 
    for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
        printf("%c",64+j);
    }
    printf("\n");
}
}