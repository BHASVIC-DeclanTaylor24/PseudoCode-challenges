//
// Created by declan.taylor24 on 06/12/2024.
//
#include <stdio.h>
int main(void) {
    int number;
    printf("enter your number");
    fflush(stdin);
    scanf("%d", &number);
    int prime = 0;
    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            prime = 1;
        }
    }
    if(prime ==0) {
        printf("Its a prime number");
    }
    else {
        printf("Its a prime number");
    }

    return 0;
}