#include <stdio.h>
int main ()
{
    int a = 1, b = 1;
    while (a <= 5){
        b = 1;
        while (b <= 5) {
          printf ("%d ", b);
          b++;
        }
        printf ("\n");
        a++;
    }
    return 0;
}
