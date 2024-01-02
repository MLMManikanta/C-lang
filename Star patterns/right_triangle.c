#include <stdio.h>
void main(){
    int i,j,n;
   printf("Enter no.of stars in series \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
            if(i+j<=i){
            printf("%d",i+j);
            }
            else{
            printf(" "); 
            }
        }
          printf("\n");
    }
}