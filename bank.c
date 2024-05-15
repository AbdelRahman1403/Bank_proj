
#include "bank.h"

/**

*/

return_status_t create_customer(customer_t **customer){
    customer_t *cus = (customer_t*)malloc(sizeof(customer_t));
    return_status_t ret = OK;
    if(cus == NULL){
        ret = N_OK;
    }
    else{
        printf("Enter The ID of Customer : ");
        scanf("%i" , &(cus->ID));
        fflush(stdin);

        printf("Enter The Name of Customer : ");
        scanf("%s" , cus->name);

        printf("Enter The Salary of Customer : ");
        scanf("%i" , &(cus->salary));
        fflush(stdin);

        printf("Enter The type account of Customer : ");
        scanf("%s" , cus->type_account);

        *customer = cus;
        ret = OK;
    }
    return ret;
}
/**

*/
return_status_t show_customer_info(customer_t *customer){
    return_status_t ret = OK;
    if(customer == NULL){
        ret = N_OK;
    }
    else{
    printf("The ID of customer is : %d\n" ,customer->ID);
    printf("The Name of customer is : %s\n" ,customer->name);
    printf("The salary of customer is : %d\n" ,customer->salary);
    printf("The Type of account of customer is : %s\n" ,customer->type_account);
    }
    return ret;
}
