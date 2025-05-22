// write a program to convert the given string in toggle case without using string function.
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else 
        {
            str[i] = str[i] - 32;
        }
        i++;

    }
    printf("Toggle case string: %s", str);

    return 0;
}
