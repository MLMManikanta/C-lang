#include <stdio.h>
// 1st method
void main(){
    int i,j,n;
    printf("Enter no.of stars in series \n");
    scanf("%d",&n);
    printf("Method 1 \n");
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--){
            printf("*"); 
          
        }
          printf("\n");
    }
     printf("\n");
    // 2nd method
    printf("Method 2\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++){
            printf("*"); 
          
        }
          printf("\n");
    }
}