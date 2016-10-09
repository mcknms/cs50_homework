#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main() {
    string name = GetString();
    if  (name != NULL){

        for (int i = 0; i < 1;i++)
            printf("%c", toupper(name[0]));

        for (int j = 0; j < strlen(name);j++){
            if (name [j] == ' ')
                printf("%c", toupper(name[j+1]));
        }
    }
    printf("\n");
}
