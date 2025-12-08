#include <stdio.h>
int main(){
    int n, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n; // Save original number

    while(n != 0){  
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("The reverse of %d is %d\n", original, rev);
    return 0;
}

