//Book structure

#include <stdio.h>//scanf(),printf()
#include <string.h> //strcpy()
struct bookx {
 char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price; 

} bookx ;
int main(){
    //prompt the user to enter the values
printf("Enter the title of the book: ");
fgets(bookx.title, sizeof(bookx.title),stdin);

printf("Enter the author of the book: ");
fgets(bookx.author,sizeof(bookx.author),stdin);
printf("Enter the publication_year: ");
scanf("%d\n",&bookx.publication_year);
printf("Enter the ISBN: ");
scanf("%s\n",bookx.ISBN);
printf("Enter the price: ");
scanf("%.2f\n",&bookx.price);

//print the values

    printf("\nbook details:\n");
    printf("title: %s", bookx.title);
    printf("author: %s", bookx.author);
    printf("publication_year: %d\n", bookx.publication_year);
    printf("ISBN: %s\n", bookx.ISBN);
    printf("Price: %.2f\n", bookx.price);


    
return 0;
}




