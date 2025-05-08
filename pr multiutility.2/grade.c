#include <stdio.h>
int main()
{
    int val, a;

    printf("Enter your score :- ");
    scanf("%d", &val);

     (val >= 91 && val <= 100) ? printf("your gread is A. Excellent work!") : (val >= 81 && val <= 90)   ? printf("your gread is B. Excellent work! you are eligible for the next level.")
                                                                           : (val >= 61 && val <= 80)   ? printf("your gread is c. Good work!")
                                                                           : (val >= 41 && val <= 60)   ? printf("your gread is D. Good work!")
                                                                                                        : printf("fail");
    return 0;
}