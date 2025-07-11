#include <stdio.h>

int check() {

    int arr[3];
    int i;
    int max = 0;
    int min;

    for(i = 0; i < 3; i++) {
        printf("Enter %d Number: ",i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 3; i++) {
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    printf("The Number %d is greatest\n", max);
    printf("The Number %d is smallest\n", min);

}

int main() {

    check();
}