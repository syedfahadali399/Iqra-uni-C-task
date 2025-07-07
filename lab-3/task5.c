#include <stdio.h>
int main() {
    // Use a do while loop to display each entered number until zero is encountered
    int num;

    printf("Enter any Numbber (0 to stop): ");
    scanf("%d", &num);

    printf("%d \n", num);

    do{
        printf("Enter any Numbber (0 to stop): ");
        scanf("%d", &num);

        printf("%d \n", num);
    } while(num != 0);
        printf("Program is Stop!!!");
    
}