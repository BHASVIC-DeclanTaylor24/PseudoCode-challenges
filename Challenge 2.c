//
// Created by declan.taylor24 on 06/12/2024.
//
#include <stdio.h>

int main(void) {
    int array[7];
    for(int j = 0; j<6; j++) {
        printf("enter num");
        fflush(stdin);
        scanf("%d", &array[j]);
    }
    int biggest = 0;
    for(int i = 0; i<6; i++) {
        if(highest < array[i]) {
            highest = array[i];
        }
    }
    printf("%d", highest);
    return 0;

}