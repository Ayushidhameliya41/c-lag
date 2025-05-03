#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("Enetr a value of the first number : ");
    scanf("%d",&a);
    printf("Enetr a value of the second number : ");
    scanf("%d",&b);
    printf("Enetr a value of the third number : ");
    scanf("%d",&c);
    
    //min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    min = ( a < b ) ? (( a < c ) ? a : c ) : (( b < c ) ? b : c );
       
    printf("the minimuum value is : %d",min);
        
}