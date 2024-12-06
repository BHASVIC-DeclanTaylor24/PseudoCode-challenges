//
// Created by declan.taylor24 on 06/12/2024.
//
#include <stdio.h>
int main(void) {
    int array[10];
    for(int i =0; i < 9;i++) {
        printf("enter num");
        fflush(stdin);
        scanf("%d", &array[i]);

    }
    int holder = 0;
    int temp = 0;
    while(holder == 0) {
        holder = 1;
        for(int j =0; j < 9;j++) {
            if(array[j-1]> array[j]) {
                temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
                holder = 0;
            }
        }

    }
    printf("%d" ,array);

    return 0;


}