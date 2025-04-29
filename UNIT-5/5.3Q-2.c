#include <stdio.h>
int main()
{
    int ch, val;
    printf("press 1 for English\n ");
    printf("press 2 for Hindi\n ");
    printf("press 3 for Gujrati\n");

    printf("Enter number :- ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("press 1 fot internet recharge\n");
        printf("press 2 for top-up recharge\n");
        printf("press 3 for Special recharge\n");
        scanf("%d",&val);

        switch (val)
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

        default:
            printf("invalid choice");
            break;
        }
        break;
    
    
    case 2:
        printf("internet recharge ke liye 1 dabaiye\n");
        printf("top-up recharge ke liye 2 dabaiye\n");
        printf("Special recharge ke liye 3 dabaiye");
        scanf("%d",&val);

        switch (val)
        {
        case 1:
            printf("apne safltapurvak internet Recharge kr liya hai");
            break;

        case 2:
            printf("apne safltapurvak top-up Recharge kr liya hai");
            break;

        case 3:
            printf("apne safltapurvak Special Recharge kr liya hai");
            break;

        default:
            printf("invalid enumber");
           break; 
        }
        break;
    
    
    case 3:
        printf("internet recharge karva mate 1 dabavo\n");
        printf("top-up recharge karva mate 2 dabavo\n");
        printf("Special recharge karva mate 3 dabavo");
        scanf("%d",&val);

        switch (val)
        {
        case 1:
            printf("tamaru safaltapurak internet recharge thay gayu che ");
            break;

        case 2:
            printf("tamaru safaltapurak top-up recharge thay gayu che");
            break;

        case 3:
            printf("tamaru safaltapurak Special recharge thay gayu che");
            break;

        default:
            printf("invalid enumber");
            break;
        }
        break;
    default:
        printf("******thanks******");
        break;
    }
    return 0;
}
