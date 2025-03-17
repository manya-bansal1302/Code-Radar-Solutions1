#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    int ch=65;
    for(int i=1;i<=r;i++){
        for(int j=0;j<=r-i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}