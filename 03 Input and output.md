### Output instruction

- In C, standard output device is monitor and printf() is use to send data/message to monitor
- printf() is a predefine function
- In C++, we can use cout to send data/message to monitor
- cout is an object, character out
- cout is predefine object in C++
- The "<<" operator is called string insertion or put to operator

<img src="notes/output instruction.png" width="400">

### Input instrucction

- In C, standard input is keyboard and scanf() is use to receive data from keyboard
- scanf() is a predefined function in C
- In C++, we can use cin to input data from keyboard
- The identifier cin is a predefine object in C++
- The ">>" operator is know as string extraction or get from operator

<img src="notes/input instruction.png" width="400">

### About iostream.h

- According to ANSI standards for C language, explicit declaration of function is recommended but not mandatory
- ANSI standards for C++ language says explicit declaration of function is compulsory (means declaration of function in header file is compulsory in C++)
- Header files: predefine functions are declared in header files, so whenever you are using any predefine function in your code, you have to include specific header file that contain its declaration
- We need to include header file iostream.h, it contains declaration for the identifier cout and the operator "<<". And also for the identifier cin and operator ">>".
- Header files contains declaration of identifier
- Identifier can be variable name, function name, macro, object etc.

### endl

- Inserting endl into the output stream causes the screen cursor to move to the beginning of the next line.
- endl is a manipulator and it is declared in iostream.h in C++
- '\n' character also works as it works in C for moving into next line

### Sample program

<img src="notes/sample program.png" width="400">
