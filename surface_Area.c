// calculating the  surface_area_of_a_cylinder
#include <stdio.h>

int main() {
    int radius;
    double const pi=3.142;
    float crossectional_area;
    
    printf("enter the radius: ");
    scanf("%d",&radius);
    
    
    crossectional_area=2*pi*radius*radius;
    
     
     printf("the crossectional_area of the cylinder is %.4f\n",crossectional_area) ;
     
     int diameter,height;
     
     float curved_surface;
     
     
     printf("enter the diameter: ");
    scanf("%d",&diameter);
    printf("enter the height: ");
    scanf("%d",&height);
    
    curved_surface=pi*diameter*height;
    
    printf("the curved_surface is %f\n",curved_surface);
    
    int surface_area;
    
    surface_area=crossectional_area+curved_surface;
    printf("the surface_area is %d",surface_area);
    
    
    
    

    return 0;
}
