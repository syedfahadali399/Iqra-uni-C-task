#include <stdio.h>
int main() {
    
    int side1, side2, side3, volume;

    printf("Enter the number to find the volume of cube: ");
    scanf("%d", &side1);

    printf("Enter the number to find the volume of cube: ");
    scanf("%d", &side2);

    printf("Enter the number to find the volume of cube: ");
    scanf("%d", &side3);

    volume = side1 * side2 * side3;

    printf("The volume of the cube is %d", volume);
}