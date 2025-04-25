//find minummum value 
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enetr a value of the first number : ");
    scanf("%d",&a);
    printf("Enetr a value of the second number : ");
    scanf("%d",&b);
    if ( a < b )   
    {
        printf("The minimum number is: %d\n",a);
    }
    else
    {
        printf("The minimum number is: %d",b);
    }
}
