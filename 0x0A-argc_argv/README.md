# Argc and Argv

This project looks into the arguments argc and argv passed on to the main function.  
Argc stands for argument count and Argv argument vector where `argc` is the number of arguments passed on the CLI and `argv` an array of pointers to string arguments passed.  
The purpose of the arguments passed to main is to direct the way a program goes about it's tasks.  
The declaration: `int main(int argc, char *argv[]);`  
The arguments to main will have been initialized to meet the following conditions:
* `argc` is greater than zero.
* `argv[argc]` is a null pointer.
* `argv[0]` through to `argv[argc - 1]` are pointers to strings whose meaning will be determined by the program.
* `argv[0]` will be a string containing the program's name or a null string if that is not available. Remaining elements of argv represent the arguments supplied to the program.  

> All the files in this project have been compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -pedantic -Wextra -std=gnu89`
