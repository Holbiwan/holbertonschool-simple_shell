Shell Manual page "August 25, 2023"

NAME
hsh - Simple Command Interpreter (Simple Shell)

SYNOPSIS
hsh [options] [file]

DESCRIPTION
Simple Shell is a command interpreter for the system. This version is a simple shell that has features similar to sh.

Simple Shell reads a line from the command line, displays a prompt, and receives a command. After the execution of a command, it displays the prompt again followed by a new line. If an executable file is not present, an error message will be printed, and it displays the prompt again.

OPTIONS
The following options change the normal Simple Shell environment at booting:

    -i  Interactive mode
    -n  Non-interactive mode

INVOCATION
In its interactive mode, Simple Shell displays a prompt, handles execution, and errors. In its non-interactive mode, Simple Shell displays a prompt, executes a shell script, and exits once executed. In its restricted mode, Simple Shell displays a prompt but handles limited commands.

ARGUMENTS
Arguments follow the single-word command. They are first searched in the PATH. If found, Simple Shell will read and execute the command, then exit and display the prompt again. If not found in the PATH, the argument will be searched in the built-ins. When found, it will read and execute the command, then exit and display the prompt again.

    SYNTAX: $ command -arguments
    EXAMPLE: $ ls -l
             $ cd ..

DEFINITIONS
    - EOF (End-of-file): Indicates no more data is available for reading; its keyboard translation is Ctrl+D.
    - Exit Status: Return status of a command after it terminates.
    - File Command: Takes a file as a command line argument; Simple Shell will not print a prompt again and will not read from standard input.
    - PID (Process Identification): A unique identification number assigned by the kernel to every process.
    - Prompt: Displayed when Simple Shell is booted.
    - Signals: A handler condition for processes.
    - Static Variable: A variable that's declared and initialized only once and stays the same through the end of the program.

BUILT-INS
    - setenv: Defines the value of an environmental variable.
    - unsetenv: Removes an environmental variable.

ENVIRONMENTAL VARIABLES
    - HOME: Contains the path of the home directory.
    - PATH: Contains directories where executable files are stored.
    - PWD (Print Working Directory): Contains the path of the current directory.

FUNCTIONS
    - chdir: Changes the current working directory.
    - exit: Terminates Simple Shell; its keyboard translation is Ctrl+C.
    - getcwd: Copies the pathname of the current working directory.
    - getline: Reads a line from Simple Shell.
    - strtok: Splits a string by a delimiter into substrings called tokens.

GLOBAL VARIABLES
    - environ: A global variable that's an array of strings containing environment variables.

LISTS
    - &&: A shell logical operator that executes if both commands are true.
    - ||: A shell logical operator that executes both or whichever command is true.

SIMPLE COMMANDS
    - alias: Prints a list of aliases; an alias is a shortcut to a command.
    - cd: Changes the current directory.
    - env: Prints a list of environment variables.
    - help: Prints a list of built-in commands.
    - history: Prints a list of previously used commands and their corresponding PIDs.
    - printenv: Prints the list of environment variables contained in environ.

SPECIAL VARIABLES
    - $?: Prints the return value of the previously executed process.
    - $$: Prints the PID of the current process.
    - $*: Prints the list of arguments in the current process.

SYSTEM CALLS
    - execve: Replaces the current process with a new process.
    - fork: Creates a new process called a child process.
    - getpid: Returns the PID of the current process.
    - getppid: Returns the parent PID of the current process.
    - read: Reads from a file descriptor in the kernel.
    - signal: Interrupts the current executing process.
    - stat: Returns current information about a file.
    - wait: Waits for a child process to terminate.

SEE ALSO
    sh(1), bash(1)

BUGS
No known bugs.

AUTHORS
Sabrina Papeau, Saima Riaz

