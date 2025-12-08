#include <stdio.h>
int main (){
    int i,j;
    char ch = 'A';
    int rows = 3;
    for (i=1; i<=rows; i++) {
        for (j=1; j<=i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
} 