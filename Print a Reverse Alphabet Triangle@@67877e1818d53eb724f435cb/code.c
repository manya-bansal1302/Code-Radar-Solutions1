#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        int ch=65;
        for(int j=0;j<=r-i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}