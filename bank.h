#ifndef BANK_H
#define BANK_H

#include <stdio.h>
#include <stdlib.h>
#include "Platform_Types.h"

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
return_status_t transfer_moeny(int *source_id , int *destination_id , double mouny);

#endif // BANK_H
