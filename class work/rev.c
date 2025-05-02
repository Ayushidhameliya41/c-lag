#include<stdio.h>
int main()
{
    int no=123,rev,r;

    while(no>1)
    {
        r = no / 10 ;
        rev = ( rev * 10 ) + r;
        no = no / 10; 
    }
    printf("%d",rev);
}