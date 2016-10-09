#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[]){
    if (argc != 2) {
        printf ("Error!\n");
        return 1;
    }
    int key = atoi(argv[1]);
    if (key < 0) {
        return 1;
    }
    else {
        string inputText = GetString();
        for (int i = 0, j = strlen(inputText); i < j;i++) {
            if (isalpha(inputText[i])) {
                if (isupper(inputText[i])) {
                    printf ("%c", ((inputText[i] - 'A') + key) % 26 + 'A');
                }
                if (islower(inputText[i])) {
                    printf ("%c", ((inputText[i] - 'a') + key )% 26 + 'a');
                }
            }
            else {
                printf("%c", inputText[i]);
            }
        }
        printf ("\n");
        return 0;
    }
}

