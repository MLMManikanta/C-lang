 #include <stdio.h>
void main(){
    int i,j,n,n1=1;
 printf("Enter no.of stars in series \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
            printf(" %d ",n1);
            n1++;
        }
          printf("\n");
    }
}