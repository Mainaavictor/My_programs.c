//You're required to develop a c program to perform basic text file operations.The program should implement the folowing tasks.
//Write a function that prompts the user to enter a paragraph(upto 200 characters) and writes it to a file named "output.txt"
//write a function that reads the content from "output.txt" and display it on the screen.
//Modify the program to append an additional paragraph to "output.txt" without deleting the original content.
//Ensure the program handles errors effectively when opening, reading or writting to the file.





#include <stdio.h>
//this includes the standard input output library, which provides functions like printf, scanf, fopen, fgets, 
#include <stdlib.h>
//includes the standard library for functions like perror, which is used for error handling.

void writeToFile();
void readFromFile();
void appendToFile();//this declarations lets the user know that the functions will be defined later forthe code


int main()//entry point of the program 
{
    int choice;
    //menu and user choice
    //the do while loop repeatedly displays a menu and prompts the user for input until they choose to exit by entering 4.
    //scanf reads the user's choice and getchar() consumes the newline left by scan f.

    do {
        printf("\nFile Operations:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                //switch case for menu selection...
               /* //switch(choice) processes the user's choice:
        #case 1: calls write to file() to write to the file
        #case 2: calls read from file() to read the file
        #case 3: calls append to file() to append to the file
        #case 4: exits the loop
        #default:prints an error message for invalid choices 
        */
        }
    } while (choice != 4);

    return 0;
}

// i. Write function to prompt user input and write to "output.txt"
void writeToFile() {
    FILE *file = fopen("output.txt", "w");  // Open file in write mode
    if (file == NULL) {                     // Error handling if file can't be opened
        perror("Error opening file");//displays an error message
        return;
    }

    char paragraph[201];
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);  // Get input from user

    fputs(paragraph, file);  // Write the paragraph to the file
    fclose(file);            // Close the file
    printf("Paragraph written to output.txt.\n");
}

// ii. Function to read content from "output.txt"
void readFromFile() {
    FILE *file = fopen("output.txt", "r");  // Open file in read mode
    if (file == NULL) {                     // Error handling if file can't be opened
        perror("Error opening file");
        return;
    }

    char ch;
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {     // Read character by character until end of file
        putchar(ch);                        // Display each character
    }
    fclose(file);                           // Close the file
}

// iii. Function to append additional paragraph to "output.txt"
void appendToFile() {
    FILE *file = fopen("output.txt", "a");  // Open file in append mode
    if (file == NULL) {                     // Error handling if file can't be opened
        perror("Error opening file");
        return;
    }

    char paragraph[201];
    printf("Enter a paragraph to append (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);  // Get additional input from user

    fputs(paragraph, file);  // Append the paragraph to the file
    fclose(file);            // Close the file
    printf("Paragraph appended to output.txt.\n");
}
