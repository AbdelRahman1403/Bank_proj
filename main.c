#include "bank.h"
int main()
{
    customer_t *cus[3];
    uint32 i = 0;
    printf("Hello in Bank system , welcome back\n");
    printf("You can start your work now :)\n");
while(1){
        /////////////////////////////////////////
    printf("What is the process do you want ? \n");
    printf("1 - Create a customer \n");
    printf("2 - Show the customer information\n");

//////////////////////////////////////////////
    uint32 choice = 0;
    scanf("%i",&choice);
    switch(choice){
    case 1:
        //create customer
        create_customer(&cus[i]);
        i = i + 1;
        system("cls");
        break;
    case 2:
        // show customer information
        printf("Enter Customer ID : ");
        uint32 x = 0;
        //Error
        scanf("%x",&x);
        show_customer_info(cus[x-1]);
        //system("cls");
        break;
    case 3:
        //system("cls");
        break;

    default:

        //system("cls");
        break;
    }
}

    return 0;
}


