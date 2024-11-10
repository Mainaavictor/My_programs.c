//Write a c program to read the name and marks of n number of students and store them in a file. If the file previously exists, add the information to the file.  


#include <stdio.h>//includes the standart input and output library, which allows the use of functions like print f,scan f and fopen.

struct Student {//define's a struture student that can hold two pieces of information about a student
    char name[50];
    int marks;
};

int main() {
    int n;//declares the integer n to store the number of students
    printf("Enter the number of students: ");//the program first asks for n students to be able to work with a variable number of students,allowing us to handle a variable number of entries.
    scanf("%d", &n);

    struct Student students[n];//declares an array students of the type student with asize of n,allowing us to store the data for n students dynamically
    FILE *file = fopen("student.txt","a" ); 
    // Open file in append mode,,,,....adds new data at the end of an existing file without overwritting it.

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Input data for n students
    for (int i = 0; i < n; i++)//starts a for loopthat will iterate n times (one for each student)
    {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        // Append to file
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);//write the student's name and marks to the file using fprintf in a formatted way:Name:<name>,Marks:<marks>.
        //%s is the format specifier for string(name).
        //%d is for an integer(marks).
    }

    fclose(file);//closes the file and ensures data is saved and to free up resources.
    printf("Data appended to students.txt\n");

return 0;
}
