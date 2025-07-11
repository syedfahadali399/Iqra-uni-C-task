#include <stdio.h>

int check_stdudent_position(){
    int arr[3][3];
    int i,j;
    int max = 0;
    int arrs[3];

    for(i = 0; i < 3; i++) {
        printf("%d Student Marks:-\n", i+1);
        for(j = 0; j < 3; j++) {
            printf("Enter %d Subject Marks (max 50): ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        int sum = 0;
        printf("%d Student Marks:-\n", i+1);
        for(j = 0; j < 3; j++) {
            sum += arr[i][j];
            arrs[i] = sum;
        }
        printf("Total marks of student is %d\n\n", sum);
    }

    for(i = 0; i < 3; i++) {
        if(arrs[i] > max) {
            max = arrs[i];
        }
    }

    printf("The Student which gain the most marks is %d", max);
}

int main() {
    check_stdudent_position();
}