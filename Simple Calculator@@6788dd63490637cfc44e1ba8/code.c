#include <stdio.h>
int main()
{
    double num1,num2;
    char ch;
    scanf("%lf %lf %c",&num1,&num2,&ch);
    if(ch=='+'){
        printf("%d",num1+num2);
    }
    else if(ch=='-'){
        printf("%d",num1-num2);
    }
    else if(ch=='*'){
        printf("%d",num1*num2);
    }
   else if(ch=='/'){
        printf("%d",num1/num2);
    }
    else{
        printf("error");
    }
    return 0;
}