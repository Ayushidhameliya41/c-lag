#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :- ");
    scanf("%d",&age);
    if(age<=18 || age>100) 
    {
        printf("no");
    }
    else 
    {
        printf("yes");
    }
    return 0;
}