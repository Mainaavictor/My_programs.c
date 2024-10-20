// calculating the compound interest
#include <stdio.h>

int main() {
    int rate,principle_amount,time,number_of_times,compound_interest;
    
    printf("enter the rate: ");
    scanf("%d",&rate);
    
    printf("enter the principle_amount: ");
    scanf("%d",&principle_amount);
    
    printf("enter the time: ");
    scanf("%dannually",&time);
    
    printf("enter the number_of_times: ");
     scanf("%d",&number_of_times);
     
     compound_interest=principle_amount*(1+rate/number_of_times)^time;
     
     printf("the compound_interest is %d ",compound_interest);
     
    
    
    
    

    return 0;
}
