#include<stdio.h>
int main()
{
    int ch,a,b;
    printf("press 1 for addition \n ");
    printf("press 2 for substraction\n ");
    printf("press 3 for multiplication \n ");
    printf("press 4 for divide ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter A : ");
            scanf("%d",&a);
            printf("Enter B : ");
            scanf("%d",&b);
            printf("add :- %d",a + b);
        break;

        case 2:
            printf("Enter A : ");
            scanf("%d",&a);
            printf("Enter B : ");
            scanf("%d",&b);
            printf("sub :- %d",a - b);
        break;

        case 3:
            printf("Enter A : ");
            scanf("%d",&a);
            printf("Enter B : ");
            scanf("%d",&b);
            printf("mul :- %d",a * b);
        break;

        case 4:
            printf("Enter A : ");
            scanf("%d",&a);
            printf("Enter B : ");
            scanf("%d",&b);
            printf("div :- %d",a / b);
        break;

        default:
            printf("Invalid Choice");
    }
    return 0;
}