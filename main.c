#include "bank.h"

int main()
{
    customer_t *cus;
    create_customer(&cus);
    show_customer_info(cus);
    return 0;
}


