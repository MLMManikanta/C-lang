#include <stdio.h>
void main(){
   int i,j,rows, space; 
   printf("enter number of rows you want to print : "); 
   scanf("%d",&rows); 
   printf("Method1 \n");
 for (i=1;i<rows; i++)
    { 
        for (space=1; space<=(rows-i); space++) 
        { 
            printf(" "); 
            } 
        for(j=1;j<=(2*i-1); j++) {
            printf("*"); 
            }
            printf("\n");
             } 
   for (i=rows;i>=1; i--)
    { 
        for (space=1; space<=(rows-i); space++) 
        { 
            printf(" "); 
            } 
        for(j=1;j<=(2*i-1); j++) {
            printf("*"); 
            }
            printf("\n");
             } 

       printf("Method2 \n");
        for (i=1;i<=rows; i++)
    { 
        for (space=1; space<=(rows-i); space++) 
        { 
            printf(" "); 
            } 
        for(j=1;j<=(2*i-1); j++) {
            printf("*"); 
            }
            printf("\n");
             } 
   for (i=rows-1;i>=1; i--)
    { 
        for (space=1; space<=(rows-i); space++) 
        { 
            printf(" "); 
            } 
        for(j=1;j<=(2*i-1); j++) {
            printf("*"); 
            }
            printf("\n");
             }       
}