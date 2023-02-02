#include <stdio.h>
#define SIZE 100
#define INFO 300
void newcustomer(char ptrc[][INFO],int *count_c);
void newvecicle(char ptrv[][INFO],int *count_v);
void allcustomer(char ptrac[][INFO],int *count_ac);
void allvecicle(char ptrav[][INFO],int *count_av);
int main()
{
    int n;
    char customer[SIZE][INFO];
    char vehicle[SIZE][INFO];
    int count_cus=0,count_veh=0;
    char blankline;
    do{
        printf("choose number\n");
        printf("1-add new customer:\n");
        printf("2-add new vehicle:\n");
        printf("3-add all information of customer:\n");
        printf("4-add all information of vehicle:\n");
        printf("5-to quit\n");
        printf("select number:");
        scanf("%d",&n);
        if(n==1){
            scanf("%c",&blankline);
            newcustomer(customer,&count_cus);
            count_cus++;
        }
        else if(n==2){
            scanf("%c",&blankline);
            newvecicle(vehicle,&count_veh);
            count_veh++;
        }
        else if(n==3){
           allcustomer(customer,&count_cus);
        }
        else if(n==4){
           allvecicle(vehicle,&count_veh);
        }
        else if(n==5){
            printf("good bye");
        }
        }while(n!=5);
    return 0;
}
void newcustomer(char ptrc[][INFO],int *count_c){
    printf("your id,your name,your phone:");
    fgets(ptrc[*count_c],INFO,stdin);
}
void newvecicle(char ptrv[][INFO],int *count_v){
    printf("your make,model,your phone:");
    fgets(ptrv[*count_v],INFO,stdin);
}
void allcustomer(char ptrac[][INFO],int *count_ac){
    for(int i=0;i<*count_ac;i++){
    printf("%s",ptrac[i]);
}
}
void allvecicle(char ptrav[][INFO],int *count_av){
    for(int j=0;j<*count_av;j++){
    printf("%s",ptrav[j]);
    }
}


