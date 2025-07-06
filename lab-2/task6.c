#include <stdio.h>
int main() {

    int choose,result;

    printf("What do you want to perform\n");
    printf("1. Km to Ml\n");
    printf("2. Meter to Feet\n");
    printf("3. Cm to Inch\n");
    printf("Enter any One: ");
    scanf("%d", &choose);

    switch(choose){
        case 1:
           int kilometers,miles; 
           printf("Enter Length in Kilometer: ");
           scanf("%d", &kilometers);
           miles = kilometers * 0.621371;
           printf("The Total length is %d Miles", miles);
           break;
        case 2:
           int feet,meters; 
           printf("Enter Length in meters: ");
           scanf("%d", &meters);
           feet = meters * 3.28084;
           printf("The Total length is %d feets", feet);
           break;
        case 3:
           int centimeters,inches; 
           printf("Enter Length in centimeters: ");
           scanf("%d", &centimeters);
           inches = centimeters * 0.393701;
           printf("The Total length is %d inches", inches);
           break;
        default:
           printf("Choose Rigth Option");
           break;
    }
}