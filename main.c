#include "bank.h"

int main()
{
    customer_t *cus[2];
    create_customer(&cus[0]);
    create_customer(&cus[1]);
    printf("====================\n");
    show_customer_info(cus[0]);
     show_customer_info(cus[1]);
     printf("====================\n");
    transfer_moeny(cus[0] , cus[1] , 2000);

    return 0;
}


