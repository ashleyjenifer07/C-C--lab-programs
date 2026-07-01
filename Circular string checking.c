#include <stdio.h>

int main()
{
    char str[100];
    int i, flag = 1;

    printf("Enter the words separated by commas: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ',')
        {
            if(str[i - 1] != str[i + 1])
            {
                flag = 0;
                break;
            }
        }
    }

    if(str[0] != str[i - 1])
        flag = 0;

    if(flag)
        printf("Valid Circular String");
    else
        printf("Not a Circular String");

    return 0;
}