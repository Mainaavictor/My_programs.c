//Write a c program to write all the members of an array of structures toafile using fwrite().read the array from the file and display it on the screen.

#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() //This is the start of the main function, where the program execution begins.
{
    int n;//declares an integer n to store the number of students.
    printf("Enter the number of students: ");//prompts the user to enterthe number of students and stores it in.
    scanf("%d", &n);

    struct Student students[n];//declares an array students of type students with a size of n, allowing us to store the datafor n students dynamically. 
    FILE *file;//declares a file pointer file, which will be used for reading and writing files.

    // Input data for n students
    for (int i = 0; i < n; i++) {//starts a for loop that will iterate n times(one for each student).
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Write data to file using fwrite
    file = fopen("students.bin", "wb");//opens a binary file named "students.bin"in "write binary" mode "wb".
    //if the file does not exist it will be created.
    //if it already exists it will be overwritten.
    
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
        //writes the array students to the file in binary format.
        //>fwrite takes four arguments >...students:the data to write...>...sizeof(struct student):the size of each student structure...>...n:the number of student structures to write....>...file:the file pointer where data is written
    }
    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);//closes the file  to ensure data is saved.>>>
    printf("Data written to students.bin\n");//prints a message to indicate that data was successfully  written to "students.bin". 

    // Read data from file
    file = fopen("students.bin", "rb");//Reopens the file "student.bin" in "read binary" mode ("rb") to read back the data.
    if (file == NULL) {
        printf("Error opening file.\n");//checks if the file was successfully opened. if file is Null, an error messageis printed, and the program exits with a return code of 1. 
        return 1;
    }

    struct Student read_students[n];
    fread(read_students, sizeof(struct Student), n, file);//declares a new array read_students to store the data read from the file.
    //fread reads binary data from the file into read_students.
    //fread takes four Arguments:...
    //read students: the destintion for the data being read.
    //size of(struct Student);the size of each student structure.
    //n:the number of student structures student to read.
    //file:the file pointer to read from.
    fclose(file);
    //closes the file after reading to free up resourses

    // Display the data read from file
    printf("\nData read from students.bin:\n");//prints a header indicating that data will be displayed.
    for (int i = 0; i < n; i++) {//starts a for loop to iterate through each student in read_students.
        printf("Name: %s, Marks: %d\n", 
        read_students[i].name,
        read_students[i].marks);
        //for each student , prints the name and marks stored in read_students[i].
    }

return 0;
}
