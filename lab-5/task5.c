#include <stdio.h>
int main() {
    
    // Develop a program that stores the grades of 5 students in an array. After storing the grades, calculate and display the highest grade and the average grade of the students.

    int i,j;
    int student[5][5];
    
    for(i = 0; i < 5; i++) {
        printf("Enter %d Student marks:-\n",i + 1);
        for(j = 0; j < 5; j++){
            printf("Enter Subject Marks (max 50): ");
            scanf("%d", &student[i][j]);

        }  
    }
    

    for(i = 0; i < 5; i++) {
        int sum = 0;
        int average;
        printf("\n%d Student Report:-\n",i + 1);
        for(j = 0; j < 5; j++){
            sum += student[i][j];
            average = (sum) / 5;
            // printf("%d \n", student[i][j]);
        }
        printf("Total marks of %d student is = %d\n", i + 1, sum);
        printf("Average marks of %d student is = %d\n", i + 1, average);
    }

}