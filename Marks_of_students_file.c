
/*write a C program to read the name and marks of 5 students and store them in a file*/

#include <stdio.h>//the line includes the standard input and output library, allowing us to use functions like printf ,scanf, and f open.

struct Student //Here we define a struct(structure)called student to represent each student.A structure allow us to group different types of data together.
{
    char name[50];//declares an array of characters(string) to store the students name with a maximum of 50 characters.
    int marks;//an integer to store the students marks
};

int main() //The beginning of the main function where the program starts executing
{
    struct Student students[5];//array of student structures called students to hold information for 5 students. 
    FILE *file = fopen("students.txt", "w");//File* file is a pointer to a file. "fopen"("student.txt","w"); opens a file named "students.txt"in "write" mode.
    //if the file does not exist, it will be created.
    //if it already exists,its contents will be over written.
    //file will be Null if there's an error opening the file.

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;//this if statement checks if the file was successfully opened. if file is Null, it means there was an error.
        //we print an error message and return 1 to exit the program with a non-zero status indicating an error. 
    }

    // Input data for 5 students
    for (int i = 0; i < 5; i++) {//A for loop that iretates 5 times (one for each student). i goes from 0 to 4.
        printf("Enter name for student %d: ", i + 1);//asks the user to enter the students name, displays student 1,student 2...based on i+1...
        scanf("%s", students[i].name);//reads a string entered by the user and stores it in students
        printf("Enter marks for student %d: ", i + 1);//this prompts the user to enter the students marks and stores the integer value in students[i].marks.
        scanf("%d", &students[i].marks);

        // Write to file
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);//writes the students name and marks to the file in the specified format:Name:<name>,Marks:<marks>.
        //%s is a format specifier for a string(name).
        //%d is a format specifier for an integer(marks).
        //the loop repeats this for each student.
    }

    fclose(file);//closes the file after all student data has been written, Important to ensure data is saved and to free up resources.
    printf("Data written to students.txt\n");//this prints a confirmation message that data was written to "students.txt".
return 0;//indicates thatthe program finished successfully.
}
