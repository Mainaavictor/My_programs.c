//c Structure employee
#include <stdio.h>

int main()
{
    
#include <stdio.h>//scanf(),printf()
#include<string.h> //strcpy()
struct employee {
char name[25];
int id;
char department[20];
char email[50];
float salary; 
}  
employee;
int main() {
    
strcpy(employee.name,"John Doe");
strcpy(employee.department,"Human Resources");
strcpy(employee.email,"john.doe@company.com");
employee.id = 12345;
employee.salary = 55000.50;

printf("name:%s\n",employee.name);
printf("department:%s\n",employee.department);
printf("email:%s\n",employee.email);
printf("id:%d\n",employee.id);
printf("salary:%f",employee.salary);
}

return 0; 
}




