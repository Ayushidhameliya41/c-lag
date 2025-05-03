#include<stdio.h>
int main()
{
    int ch;
    printf("press 1 Speak English Language \n ");
    printf("press 2 Speak Hindi Language \n ");
    printf("press 3 Speak Gujrati Language :- ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("English Language");
        break;

        case 2:
            printf("Hindi Language");
        break;

        case 3:
            printf("Gujrati Language");
        break;

        default:
            printf("Invalid Choice");
    }
    return 0;
}