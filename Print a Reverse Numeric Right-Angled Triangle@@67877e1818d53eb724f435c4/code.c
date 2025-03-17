#include<stdio.h>
int main()
{
    int r;
    for(int i=1;i<=r;i++){
        int k=1;
        for(int j=0;j<=r-i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}