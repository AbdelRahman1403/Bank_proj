#include "bank.h"
int main()
{
    customer_t *cus[3];
    uint32 i = 0;
    printf("Hello in Bank system , welcome back\n");
    printf("You can start your work now :)\n");
while(1){

    printf("What is the process do you want ? \n");
    printf("1 - Create a customer \n");
    printf("2 - Show the customer information\n");
    printf("3 - Transfer monry from account to account\n");
    printf("4 - Delete account\n");
    printf("Choice from the number of the process : ");

    uint32 choice = 0;
    scanf("%i",&choice);
    switch(choice){
    case 1:
        create_customer(&cus[i]);
        i = i + 1;
        system("cls");
        break;
    case 2:
        printf("Enter Customer ID : ");
        uint32 ID = 0;
        scanf("%x",&ID);
        show_customer_info(cus[ID-1]);
        break;
    case 3:

        break;
    case 4:
        break;

    default:

        //system("cls");
        break;
    }
}

    return 0;
}

