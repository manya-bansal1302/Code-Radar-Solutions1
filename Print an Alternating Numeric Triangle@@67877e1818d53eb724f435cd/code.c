#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                printf("%d ",1);
            }
            else{
                printf("%d ",0);
            }
        }
        printf("\n");
    }
    return 0;
}