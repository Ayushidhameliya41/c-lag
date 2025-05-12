#include<stdio.h>
int main()
{
    char ch = 'a';

   do{
    printf("%c ",ch);
    ch += 4;
   }while( ch <= 'z'); 
    
   
   /*while( ch <= 'z') {  
    printf("%c ",ch);
    ch += 4;
    } */
    return 0;
}