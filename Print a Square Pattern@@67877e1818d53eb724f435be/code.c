#include <stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(k=1;k<=r;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}