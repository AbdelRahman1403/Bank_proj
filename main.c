#include "bank.h"

int main()
{
    customer_t *cus[2];
    create_customer(&cus[0]);
    //show_customer_info(cus[0]);
    chick_id_customer(cus,2);
    return 0;
}


