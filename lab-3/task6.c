#include <stdio.h>
int main() {
    int num;
    int input;
    int sum = 0;

    printf("Enter any Number (0 to stop): ");
    scanf("%d", &num);

    if(num != 0) {
        for(int i = 1; i <= num; i++){
        printf("Enter number %d to sum: ", i);
        scanf("%d", &input);

        sum += input;

        }
    } else {
        printf("Run Program again you enter 0 \n");
    }

    printf("The total number is %d", sum);
}