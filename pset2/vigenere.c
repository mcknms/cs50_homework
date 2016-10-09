#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf ("Error!\n");
        return 1;
    }

    string key = (argv[1]);
    for (int i = 0, j = strlen(key); i < j; i++) {
        if (!isalpha(key[i])) {
            printf ("Error!\n");
            return 1;
        }
    }
    string inputText = GetString();
     for (int i = 0, k = strlen(inputText), j = 0; i < k; i++)
    {
        if (isalpha(inputText[i]))
        {
            if (islower(key[j]))
            {
                if (islower(inputText[i]))
                {
                    printf("%c", ((inputText[i] - 'a')
                        + key[j] % 97) % 26 + 'a');
                }
                if (isupper(inputText[i]))
                {
                    printf("%c", ((inputText[i] - 'A')
                        + key[j] % 97) % 26 + 'A');
                }
            }
            if (isupper(key[j]))
            {
                if (islower(inputText[i]))
                {
                    printf("%c", ((inputText[i] - 'a')
                        + key[j] % 65) % 26 + 'a');
                }
                if (isupper(inputText[i]))
                {
                    printf("%c", ((inputText[i] - 'A')
                        + key[j] % 65) % 26 + 'A');
                }
            }
            j = ((j + 1) % strlen(key));
        }
        else
        {
            printf("%c", inputText[i]);
        }
    }
    printf("\n");
return 0;
}
