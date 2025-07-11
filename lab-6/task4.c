#include <stdio.h>

int check_order_price(int amount) {
    int delivery_charges = 150;
    if(amount > 1000) {
        return printf("The Order amount is greater than 1000 you got free Shipping your total amount price is %d!!\n",amount);
    } else {
        return printf("The Order amount is not greater than 1000 you now pay Shipping fee your total amount price is %d!!\n",amount+delivery_charges);
    }
}

int main() {
    int ask_user;

    printf("Enter the amount of shopping: ");
    scanf("%d", &ask_user);

    int show = check_order_price(ask_user);
    printf("%d", show);

}