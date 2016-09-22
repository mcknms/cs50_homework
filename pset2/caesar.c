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
        printf("Error! Your wrote 0 or negative key");
        return 1;
    }
    else {
        printf("plaintext: ");
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
                printf("%c ciphertext: ", inputText[i]);
            }
        }
        printf ("\n");
        return 0;
    }
}

