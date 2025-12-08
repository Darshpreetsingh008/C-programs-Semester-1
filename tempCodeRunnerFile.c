#include <stdio.h>
int main (){
    int max = arr[0];
    int min = arr[0];
    for(i = 0; i < size; i++){
        if (max<a[i]){
            max = a[i];
        }
        if (min>a[i]){
            min = a[i];
        }
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
}