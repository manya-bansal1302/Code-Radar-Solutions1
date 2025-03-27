#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i] > arr[i+1]){
            printf("Not Sorted");
            break;
        }
        else{
            continue;
        }

    }
    if(i==N-1){
        printf("Sorted");
    }
    return 0;
}