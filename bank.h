#ifndef BANK_H
#define BANK_H

#include <stdio.h>
#include <stdlib.h>
#include "Platform_Types.h"
typedef struct {
    uint16 ID;
    uint8 name[30];
    uint16 salary;
    uint8 type;
}customer_t;

customer_t *create_customer(void);


#endif // BANK_H
