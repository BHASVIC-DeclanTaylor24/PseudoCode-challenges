//
// Created by declan.taylor24 on 06/12/2024.
//
#include <stdio.h>

int main(void) {
    int array[5];
    for(int j = 0; j < 4; j++) {
        printf("enter num");
        fflush(stdin);
        scanf("%d", &array[j]);
    }
    int total = 0;
    for(int i = 0; i < 4; i++) {
        total = total + array[i];
    }
    printf("%d", total);
    return 0;
}