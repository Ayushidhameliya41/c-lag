#include <stdio.h>

int add(int a, int b);
int subt(int a, int b);
int mul(int a, int b);
float div(int a, int b);
int mod(int a, int b);

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    return (float)a / b;
}

int mod(int a, int b) {
    return a % b;
}


int main() {
    int choice, num1, num2;
    char cont = 'y';

    while (cont != '0') 
    { 
        printf("1. Addition +\n");
        printf("2. Subtraction -\n");
        printf("3. Multiplication *\n");
        printf("4. Division /\n");
        printf("5. Modulo %%\n");
        printf("Enter any number :- ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter two integers : ");
            scanf("%d %d", &num1, &num2);
        }

        switch (choice) {
            case 1:
                printf("Result = %d\n", add(num1, num2));
                break;
            case 2:
                printf("Result = %d\n", sub(num1, num2));
                break;
            case 3:
                printf("Result = %d\n", mul(num1, num2));
                break;
            case 4:
                if (num2 != 0)
                    printf("Result = %.2f\n", div(num1, num2));
                else
                    printf("Error: Division by zero.\n");
                break;
            case 5:
                if (num2 != 0)
                    printf("Result = %d\n", mod(num1, num2));
                else
                    printf("Error: Modulo by zero.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }

        printf("\nPress '0' to quit: ");
        scanf(" %c", &cont);  
    }

    printf("Program terminated.\n");
    return 0;
}

/*int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulo(int a, int b) {
    return a % b;
}*/
