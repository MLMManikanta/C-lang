#include <stdio.h>
void main(){
    int i,j,n;
    printf("Method 1\n");
   printf("Enter no.of stars in series \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
            if(j<=i){
            printf(" %d ",(i+j)-1);
            }
            else{
            printf(" "); 
            }
        }
          printf("\n");
    }
    
  
}