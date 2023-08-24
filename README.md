# **C - Simple Shell**

![This is an image]( https://zupimages.net/up/23/34/04ww.png)

### **WHAT IS SHELL ?** <img src="https://cdn-icons-png.flaticon.com/128/1903/1903496.png" width=45 align=center>
A shell is a command-line interpreter that provides a user interface to access the operating system's services. It comes in various types; here, we'll focus on the sh (Bourne Shell). Users interact with it via a terminal emulator for data input/output and command execution. Shells handle tasks like process control, I/O redirection, file manipulation, security, and scripting. All Unix systems include at least one Bourne shell interpreter located at /bin/sh.

# ***Allowed functions and system calls used*** :

* ```execve``` (man 2 execve)
* ```exit``` (man 3 exit)
* ```fork``` (man 2 fork)
* ```free``` (man 3 free)
* ```getline``` (man 3 getline)
* ```getpid``` (man 2 getpid)
* ```isatty``` (man 3 isatty)
* ```malloc``` (man 3 malloc)
* ```perror``` (man 3 perror)
* ```printf``` (man 3 printf)
* ```fprintf``` (man 3 fprintf)
* ```read``` (man 2 read)
* ```signal``` (man 2 signal)
* ```stat``` (__xstat) (man 2 stat)
* ```strtok``` (man 3 strtok)
* ```wait``` (man 2 wait)
* ```waitpid``` (man 2 waitpid)

# **Project Files List**

|***File***|***Description***|
|---|---|
|README.md|File that provides information about the project|
|man_1_simple_shell|Manual page (man page) for the simple shell program|
|simplehell.h|Header file containing function prototypes, data structures necessary for the operation of the shell|
|shell.c|Main source code file where the program starts its execution|
|builtin_helper.c|builtin_helper that is responsible for handling certain built-in commands within the shell|
|compare.c|Code file containing the main logic of the shell, handling user input and executing commands|
|execute.c|function that executes a program,updpath, tokens,environ|
|pathfinder.c|function that finds the path|
|pathfinder_helper.c|It defines two functions: _strncmp and getenviron|
|print_env.c|_printenv - function that prints environ|
|strcat.c|_strcat - function that concatenates|
|strcpy.c|strcpy - function that copies a string|
|strdup.c|strdup - function that duplicates a string|
|strlen.c|strlen - evaluates string length|
|strtok_helper.c|strtok_helper - function that splits a line|

# ***Tasks*** :ladder:

* Task 0. README, man_1_simple_shell, AUTHORS
* Task 1. Betty would be proud
* Task 2. Simple shell 0.1 - Write a UNIX command line interpreter
* Task 3. Simple shell 0.2 - Handle command lines with arguments
* Task 4. Simple shell 0.3 - Handle PATH - call fork if command no exist
* Task 5. Simple shell 0.4 - Implement the exit built-in existing in shell
* Task 6. Simple shell 1.0 - Implement env built-in, that prints current env

# ***Exemple VALGRIND***

![This is an image](https://zupimages.net/up/23/34/oi6r.png)

# ***Testing*** :diamonds:

```**Interactive mode**```:

$ ./hsh
/bin/ls
hsh main.c shell.c
($) exit

```**Non interactive mode**```:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$ cat test_ls_2
/bin/ls
/bin/ls
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2


# ***Output*** :diamonds:

Unless specified otherwise, our program must have the exact same output as sh (/bin/sh) as well as the exact same error output.

The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

```Example of error with sh```:
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found

```Same error with your program hsh```:
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found


**To compile the program this command has to be executed**:

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```


```**To run the shell is like this**```
**./hsh**

### **FLOWCHART**
![Simple Shell  flowchart]( https://zupimages.net/up/23/34/97es.png)


### **AUTHORS**
**Sabrina Papeau** - [Github](https://github.com/Holbiwan) & 
**Saima Riaz** - [Github](https://github.com/saima-riaz)
