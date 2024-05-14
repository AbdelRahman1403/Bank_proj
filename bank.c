
#include "bank.h"

/**

*/

customer_t *create_customer(void){
    customer_t *cus = (customer_t*)malloc(sizeof(customer_t));
    if(cus == NULL){
        printf("Error , can not allocate memory!!\n");
        free(cus);
    }
    else{
        printf("Enter customer's ID : ");
        scanf("%i",&(cus->ID));
        fflush(stdin);
        printf("Enter customer's Name : ");
        scanf("%s",(cus->name));
        fflush(stdin);
        printf("Enter customer's salary : ");
        scanf("%i",&(cus->salary));
        fflush(stdin);
        printf("Enter customer's account : ");
        scanf("%s",(cus->type));
        fflush(stdin);
    }
    return cus;
}
