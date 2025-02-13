#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++){
            int k=65;
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}