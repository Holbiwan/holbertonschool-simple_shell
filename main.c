#include "shell.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 on success
 */
int main(void)
{
    char *buffer = NULL;
    char *exec_path = NULL;
    size_t buffer_size = 0;
    int i, only_spaces = 1;
    int status = 1;
    int line_read;

    exec_path = malloc(BUFFER_SIZE);

    while (1)
    {
        status = isatty(0);

        if (status == 1)
            printf("$ ");

        line_read = getline(&buffer, &buffer_size, stdin);

        if (line_read == -1)
        {
            free_all(NULL, buffer, exec_path);
            exit(EXIT_SUCCESS);
            break;
        }

        buffer[strcspn(buffer, "\n")] = END_STRING_CHAR;

        for (i = 0; buffer[i]; i++)
        {
            if (!custom_isspace(buffer[i]))
            {
                only_spaces = 0;
                break;
            }
        }

        if (only_spaces)
        {
            continue;
        }

        if (strcmp(buffer, "exit") == 0)
        {
            free_all(NULL, buffer, exec_path);
            exit(0);
        }
        else if (strcmp(buffer, "env") == 0)
        {
            char **env;
            for (env = environ; *env != NULL; env++)
            {
                printf("%s\n", *env);
            }
        }
        else if (find_execute_command(buffer, exec_path) == 1)
        {
            char **args = parse_args(exec_path);
            execute_command(args);
            free_all(args, NULL, NULL);
        }
        else
        {
            printf("%s: command not found\n", buffer);
        }

        free_all(NULL, buffer, NULL);
        buffer = NULL;
    }

    return (0);
}
