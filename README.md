# **C - Simple Shell** :bell:

### **WHAT IS SHELL ?**

A shell is a command-line interpreter that provides a user interface to access the operating system's services. It comes in various types; here, we'll focus on the sh (Bourne Shell). Users interact with it via a terminal emulator for data input/output and command execution. Shells handle tasks like process control, I/O redirection, file manipulation, security, and scripting. All Unix systems include at least one Bourne shell interpreter located at /bin/sh.

![This is an image](https://zupimages.net/up/23/34/0d6p.jpg)

# ***Allowed functions and system calls used*** :

* ```execve``` (man 2 execve)
* ```exit``` (man 3 exit)
* ```_exit``` (man 2 _exit)
* ```fork``` (man 2 fork)
* ```free``` (man 3 free)
* ```getline``` (man 3 getline
* ```isatty``` (man 3 isatty)
* ```malloc``` (man 3 malloc)
* ```perror``` (man 3 perror)
* ```printf``` (man 3 printf)
* ```fprintf``` (man 3 fprintf)
* ```signal``` (man 2 signal)
* ```stat``` (__xstat) (man 2 stat)
* ```strtok``` (man 3 strtok)
* ```wait``` (man 2 wait)
* ```waitpid``` (man 2 waitpid)

# **Project Files List**

|***File***|***Description***|
|---|---|
  
|README.md|file that provides information about the project|
|man_1_simple_shell|manual page (man page) for the simple shell program|
|shell.h|header file containing function prototypes, data structures necessary for the operation of the shell |

|main.c|main source code file where the program starts its execution |
|parse_args|parsing command-line arguments passed to the shell when it's started |
|shell_main.c|code file containing the main logic of the shell, handling user input and executing commands |
|parse_command.c|module for parsing the command entered by  user and breaking it down into its constituent parts |
|find_execute_command|search for and execute a specified command |
|execute.c|contains functions related to executing commands entered by the user |
|execute_command|contains functions related to executing commands entered by the user |
|get_env.c|related to handling environment variables in the shell |
|get_env_value|used to retrieve the value of a specific environment variable |
|get_value_from_env|Another function related to obtaining values from environment variables |
|custom_isspace|custom function for checking if a character is a whitespace character |
|free.c|contains functions for freeing up memory used by the shell program |
|free_string|A function for deallocating memory used by a string |
|free_all|used to free all allocated memory in the program |
|file_exists|check whether a specified file exists in the system |
I

# **EXEMPLE**

```

```

# **Testing** :diamonds:

* Interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

* Non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

# **Output** :diamonds:

* Unless specified otherwise, our program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
* The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

Example of error with sh:

```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

Same error with your program hsh:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

# **BUGS** :warning:



# **Tasks** :ladder:

### **0. README, man, AUTHORS**

* Write a README
* Write a man for your shell.
* You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker

### **1. Betty would be proud**

* Write a beautiful code that passes the Betty checks.

### **2. Simple shell 0.1**

* Write a UNIX command line interpreter.

### **3. Simple shell 0.2**

Simple shell 0.1 +

* Handle command lines with arguments.

### **4. Simple shell 0.3**

Simple shell 0.2 +

* Handle the PATH
* fork must not be called if the command doesn’t exist

### **5. Simple shell 0.4**

Simple shell 0.3 +

* Implement the exit built-in, that exits the shell
* Usage: exit
* You don’t have to handle any argument to the built-in exit

### **6. Simple shell 1.0**

Simple shell 0.4 +

* Implement the env built-in, that prints the current environment.

## **Authors** :two_women_holding_hands:
* **Sabrina Papeau** - [Github](https://github.com/Holbiwan)
* **Saima Riaz** - [Github](https://github.com/saima-riaz)
