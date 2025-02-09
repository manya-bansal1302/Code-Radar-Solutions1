#include <stdio.h>
int main()
{
    float cp,sp;
    scanf("%f %f",&cp,&sp);
    if(cp>sp){
        printf("Loss");
    }
    else if(sp>cp){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}