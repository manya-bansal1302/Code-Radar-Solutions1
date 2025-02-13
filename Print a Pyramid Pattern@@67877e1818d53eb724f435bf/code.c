#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        for(int k=i;k<N-1;k++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}