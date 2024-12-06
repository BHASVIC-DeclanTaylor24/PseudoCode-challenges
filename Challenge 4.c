//
// Created by declan.taylor24 on 06/12/2024.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    char string[10];
    printf("enter word");
    fflush(stdin);
    gets(string);
    char StringHolder[10];
    strcpy(StringHolder,string);
    int Strlength = strlen(string);
    for(int i = 0; i < Strlength; i++) {
        string[i] = StringHolder[Strlength -i];

    }
    puts(string);
    return 0;
}