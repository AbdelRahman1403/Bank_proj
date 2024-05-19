
#include "bank.h"
static void setColor(const char *color) {
    printf("%s", color);
}
return_status_t chick_id_customer(customer_t *customer[] , int ID){
   return_status_t ret = N_OK;
    if(*customer == NULL || ID == 0){
        ret = N_OK;
    }
    else{
        for(int i = 0; i < 3; i++){
            if(customer[i]->ID == ID){
                ret = OK;
                break;
            }
            else{/*Nothing*/}
        }
    }
    return ret;

}

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
        fflush(stdin);

        printf("Enter The Salary of Customer : ");
        scanf("%f" , &(cus->salary));
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
    setColor(BLUE);
    printf("The ID of customer is : %d\n" ,customer->ID);
    printf("The Name of customer is : %s\n" ,customer->name);
    printf("The salary of customer is : %.2f\n" ,customer->salary);
    printf("The Type of account of customer is : %s\n" ,customer->type_account);
    setColor(RESET);
    }
    return ret;
}

return_status_t transfer_moeny(customer_t *cus1_source, customer_t *cus2_destination, float32 money){
    return_status_t ret = OK;
    if(cus1_source == NULL || cus2_destination == NULL){
        ret = N_OK;
    }
    else{
        if(cus1_source->salary >= money){
            cus2_destination->salary+=money;
            cus1_source->salary-=money;
            setColor(GREEN);
            printf("The process is successful , The money of the ID [ %i ] is %.2f ",cus2_destination->ID , cus2_destination->salary);
            setColor(RESET);
        }
        else{
            setColor(RED);
            printf("The salary of ID [ %i ] not enough to send money to ID [ %i ]\n",cus1_source->ID,cus2_destination->ID);
            setColor(RESET);
        }
    }
    return ret;

}

return_status_t change_data(customer_t *cus){
    return_status_t ret = OK;
    if(cus == NULL){
        ret = N_OK;
    }
    else{
        printf("which of data the customer need to change it ?\n");
        printf(" 1- change the customer ID \n");
        printf(" 2- change the customer Name\n");
        printf(" 3- change the customer Salary \n");
        printf(" 4- change the customer Type of the account \n");
        printf("Enter the number of the choice : ");
        int choice = 0;
        scanf("%i" , &choice);

        switch(choice){
    case 1:
        printf("Enter the new ID : ");
        int ID = 0;
        scanf("%i" , &ID);
        cus->ID = ID;
        break;
    case 2:
        printf("Enter the new Name : ");
        char *Name;
        scanf("%s" , Name);
        strcpy(cus->name , Name);
        break;
        }
    }
    return ret;

}





















