#ifndef BANK_H
#define BANK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Platform_Types.h"


#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

typedef enum{
    N_OK,
    OK
}return_status_t;

typedef struct {
    uint16 ID;
    float32 salary;
    uint8 type_account[10];
    uint8 name[30];
}customer_t;

return_status_t create_customer(customer_t **customer);
return_status_t show_customer_info(customer_t *customer);
return_status_t transfer_moeny(customer_t *cus1_source, customer_t *cus2_destination, float32 money);

#endif // BANK_H
