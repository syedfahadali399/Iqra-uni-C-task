#include <stdio.h>

int max_temp() {
    int arr[7];
    int max = 0;
    int i;
    
    for(i = 0; i < 7; i++) {
        printf("Enter %d Day temprature: ",i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 7; i++) {
        if (arr[i] > max) {
           max = arr[i];
           return max;
        }
    }
}

int main() {
    int show = max_temp();
    printf("The Maximum temp of 7 day is %d", show);
}