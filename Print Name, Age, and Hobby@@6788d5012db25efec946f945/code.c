#include <stdio.h>
int main()
{
    int age;
    char name[100];
    char hobby[100];
    scanf("%s %d",&name,&age);
    scanf("%s",&hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}