#include<stdio.h>
int main (){
    int num = 1;
    int rows = 3;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}