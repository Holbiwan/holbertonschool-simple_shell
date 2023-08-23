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
|README.md|File that provides information about the project|
|man_1_simple_shell|Manual page (man page) for the simple shell program|
|shell.h|Header file containing function prototypes, data structures necessary for the operation of the shell|
|main.c|Main source code file where the program starts its execution|
|parse_args|Parsing command-line arguments passed to the shell when it's started|
|shell_main.c|Code file containing the main logic of the shell, handling user input and executing commands|
|parse_command.c|Module for parsing the command entered by  user and breaking it down into its constituent parts|
|find_execute_command|Search for and execute a specified command|
|execute.c|Contains functions related to executing commands entered by the user|
|execute_command|Contains functions related to executing commands entered by the user|
|get_env.c|Related to handling environment variables in the shell|
|get_env_value|Used to retrieve the value of a specific environment variable|
|get_value_from_env|Another function related to obtaining values from environment variables|
|custom_isspace|Custom function for checking if a character is a whitespace character|
|free.c|Contains functions for freeing up memory used by the shell program|
|free_string|A function for deallocating memory used by a string|
|free_all|Used to free all allocated memory in the program|
|file_exists|Check whether a specified file exists in the system|

# **EXEMPLE**

```
root@271189847cff:/holbertonschool-simple_shell# ./hsh
$ ls -la
total 68
drwxr-xr-x 4 root root   219 Aug 23 09:40 .
drwxr-xr-x 1 root root  4096 Aug 23 06:55 ..
-rwxr-xr-x 1 root root   243 Aug 22 22:30 AUTHORS
-rwxr--r-- 1 root root  1646 Aug 23 04:38 execute.c
-rwxr--r-- 1 root root   533 Aug 23 04:37 free.c
-rwxr--r-- 1 root root  1169 Aug 23 04:37 get_env.c
drwxr-xr-x 8 root root   185 Aug 23 09:35 .git
drwxr-xr-x 2 root root    33 Aug 22 22:29 hack
-rwxr-xr-x 1 root root 18448 Aug 23 06:07 hsh
-rwxr--r-- 1 root root  1642 Aug 23 05:39 main.c
-rwxr-xr-x 1 root root   809 Aug 22 23:21 man_1_simple_shell
-rwxr--r-- 1 root root  1158 Aug 23 04:35 parse_command.c
-rwxr-xr-x 1 root root  4674 Aug 23 09:34 README.md
-rwxr--r-- 1 root root   715 Aug 23 05:54 shell.h
-rwxr--r-- 1 root root   963 Aug 23 05:06 shell_main.c
$
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

* Task 0. README, man_1_simple_shell, AUTHORS
* Task 1. Betty would be proud
* Task 2. Simple shell 0.1 - Write a UNIX command line interpreter
* Task 3. Simple shell 0.2 - Handle command lines with arguments
* Task 4. Simple shell 0.3 - Handle PATH - call fork if command no exist
* Task 5. Simple shell 0.4 - Implement the exit built-in existing in shell
* Task 6. Simple shell 1.0 - Implement env built-in, that prints current env


## **Authors** :two_women_holding_hands:
* **Sabrina Papeau** - [Github](https://github.com/Holbiwan)
* **Saima Riaz** - [Github](https://github.com/saima-riaz)
