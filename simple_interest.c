// calculating the simple_interest
#include <stdio.h>

int main() {
    int rate,principle_amount,time,simple_interest;
    
    printf("enter the rate: ");
    scanf("%d",&rate);
    
    printf("enter the principle_amount: ");
    scanf("%d",&principle_amount);
    
    printf("enter the time: ");
    scanf("%dannually",&time);
    
     
     simple_interest=principle_amount*time*rate/100;
     
     printf("the simple_interest is %d ",simple_interest);
     
    
    
    
    

    return 0;
}
