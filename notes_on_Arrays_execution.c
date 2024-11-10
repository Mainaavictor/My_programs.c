//{exercise 1}
//To execute code that involves file operations, you dont need to manually link a file before hand. The program will handle file creation and manipulation on its own based on the files mode specified (like "w","a","wb","rb"). Heres how it works,
//in Exercise 1:the code opens the file students.txt in write mode ("w"):


File *file= fopen("students.txt","w");
//If students.txt does not exist, the program will create it.
//if students.txt already exists, the program will overwrite it.
//after running the program  students,txt will contain the data entered by the user.


//exercise 2
//the file is pened in append mode("a")
File *file= fopen("student.txt","a");
//if student.txt does not exist it will be created automatically.
//if students.txt already exists, the program will add data to the end of the file without erasing the existing content.


//exercise 3
//the file is opened in "write binary mode" and "read binary mode"
File *file = fopen("students.bin","wb");
//if students.bin does not exist, it will be created.
//if students.bin already exists, it will be overwritten when opened in "wb" mode.

File *file= fopen("student.bin","rb");
//The "rb" mode opens the file to read data in binary format.
//If students.bin does not exist when trying to read, the program will print an error and exit.
//Steps to Run the Program

/*1. Compile the Code: Use a C compiler like gcc to compile the program.

gcc program.c -o program

Replace program.c with the name of your C file.


2. Run the Program: After compiling, run the executable:

./program

The program will:

Create or append to students.txt in Exercises 1 and 2.

Create or overwrite students.bin in Exercise 3.



3. Verify Output: After running the program, you can open students.txt (Exercises 1 and 2) or students.bin (Exercise 3) in a text editor to verify the output.



For Exercise 3, note that students.bin contains binary data, so opening it in a text editor may show unreadable characters. To view the data, you would need to use the program to read and display it, as explained in the code.

Summary

The file handling in the program is automatic:

The program creates, appends, or reads files as needed based on the specified mode ("w", "a", "wb", "rb").

You only need to ensure you have permission to create and modify files in the directory where you’re running the program.*/




