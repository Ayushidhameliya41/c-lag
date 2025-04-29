#include<stdio.h>
int main()
{
    int ch;
    printf("press 1 for english\n ");
    printf("press 2 for gujarati\n ");
    printf("press 3 for hindi\n");
    printf("enter number :- ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("press 1 fot internet recharge");
            printf("press 2 for top-up recharge");
            printf("press 3 for Special recharge");
            scanf("%d",&ch);
        break;

            switch(ch)
            {
                case 1:
                    printf("you have successfully done an internet recharge");
                break;

                case 2:
                    printf("you have successfully done a top-up recharge");
                break;

                case 3:
                    printf("you have successfully done a special recharge");
                break;
                
                defalut:
                    printf("invalid choice");
            }
        default:
            printf("*****thanks*****");
    }
    return 0;
}