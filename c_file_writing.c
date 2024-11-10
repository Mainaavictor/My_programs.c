//C file handling : writing to file
#include //scanf(),printf(),fprintf,fclo
#include //exit()

int main() {
int number;
FILE *fptr; //declare pointer
fptr = fopen("C:\\Users\\maina\\OneDrive\\Desktop\\mahindra\\sample.txt", "w");
if(fptr == NULL){
printf("Error opening the file");
exit(1);
}
printf("Enter a Random number:");
scanf("%d",&number);

fprintf(fptr, "The number entered is %d", number);
fclose(fptr);
printf("Number written successfully");
    return 0;
}
