#include<stdio.h>
int main()
{
int no= 2134;
int cnt=0;
while(no>0)
{
    cnt++;
    no=no/10;
}
printf("ans = %d",cnt);
}