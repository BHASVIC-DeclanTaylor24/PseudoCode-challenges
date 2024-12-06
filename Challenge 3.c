//
// Created by declan.taylor24 on 06/12/2024.
//
#include <stdio.h>
#include <string.h>


int main(void) {
    char string[100];
    printf("enter your word");
    fflush(stdin);
    scanf("%c",&string[100] );
    int strlength = strlen(string);
    for(int i = 0; i < strlength; i++) {
        int vowels = 0;
        if (string[i] == 'a' ||'e' ||'i' ||'o' ||'u' ||'A' ||'E' ||'I' ||'O'||'U') {
            vowels = vowels + 1;

        }
    }
    printf("%d", vowels);
    return 0;
}