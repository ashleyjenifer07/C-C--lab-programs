#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], words[100][100];
    char find[100], replace[100];
    int i, row = 0, col = 0;

    printf("Enter the sentence: ");
    scanf("%[^\n]", str);

    printf("Enter the word to find: ");
    scanf("%s", find);

    printf("Enter the replacement word: ");
    scanf("%s", replace);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            words[row][col] = '\0';
            row++;
            col = 0;
        }
        else
        {
            words[row][col] = str[i];
            col++;
        }
    }

    words[row][col] = '\0';

    printf("\nUpdated Sentence:\n");

    for(i = 0; i <= row; i++)
    {
        if(strcmp(words[i], find) == 0)
        {
            strcpy(words[i], replace);
        }

        printf("%s ", words[i]);
    }

    return 0;
}