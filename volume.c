// calculating the  volume_of_a_cylinder
#include <stdio.h>

int main() {
    int radius,height;
    double const pi=3.142;
    float volume;
    
    printf("enter the radius: ");
    scanf("%d",&radius);
    
    printf("enter the height: ");
    scanf("%d",&height);
    
    volume=pi*radius*radius*height;
    
     
     printf("the volume of a cylinder is %.4f",volume) ;
     
    
    
    
    

    return 0;
}
