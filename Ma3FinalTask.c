#include <stdio.h>

int main(){
    int selection, price, payment, change;
    printf("Please select your order\n");
    printf("[1]Colgate(P20)\n[2]Nature's Spring Water(P15)\n[3]1.25 Coca-cola(P55)\n");
    printf("Choice: ");
    scanf("%d",&selection);
    switch(selection){ 
        
        case 1:
        price = 20;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Colgate.\n");
            change = payment - price;
            printf("Change: %d", change);
        } 
        else {
            printf("You don't have enough funds!");
        }
        break;

        case 2:
        price = 15;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Nature's Spring Water.\n");
            change = payment - price;
            printf("Change: %d", change);
        } 
        else {
            printf("You don't have enough funds!");
        }
        break;

        case 3:
        price = 55;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased 1.25 Coca-cola.\n");
            change = payment - price;
            printf("Change: %d", change);
        } 
        else {
            printf("You don't have enough funds!");
        }
        break;

        default:
        printf("Invalid Input!");
    }
    return 0;
}