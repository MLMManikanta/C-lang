#include <stdio.h>
void main(){
   int i,j,rows, space; 
   printf("enter number of rows you want to print : "); 
   scanf("%d",&rows); 
   for (i=1;i<=rows; i++)
    { 
        for (space=1; space<=(rows-i); space++) 
        { 
            printf(" "); 
            } 
        for(j=1;j<=i; j++) {
            printf("* "); 
            }
            printf("\n");
             } 
             
}