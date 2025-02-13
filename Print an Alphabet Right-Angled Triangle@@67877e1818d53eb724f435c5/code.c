#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int k=65;
        for(int j=0;j<i+1;j++){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}