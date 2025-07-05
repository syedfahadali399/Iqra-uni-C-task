#include <stdio.h>
int main(){

    int width,heigth,area;

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the heigth of the rectangle: ");
    scanf("%d", &heigth);

    area = width * heigth;

    printf("The area of the triangle is: %dcm", area);

}