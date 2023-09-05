#include "main.h"
#include <errno.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Exit the program with an error message.
 * @code: The exit code.
 * @message: The error message.
 * @file: The filename related to the error (can be empty).
 */
void error_exit(int code, const char *message, const char *file) {
    dprintf(STDERR_FILENO, "Error: %s %s\n", message, file);
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        error_exit(97, "Usage: cp file_from file_to", "");
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        error_exit(98, "Can't read from file", argv[1]);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1) {
        close(fd_from);
        error_exit(99, "Can't write to file", argv[2]);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            close(fd_from);
            close(fd_to);
            error_exit(99, "Can't write to file", argv[2]);
        }
    }

    if (bytes_read == -1) {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Can't read from file", argv[1]);
    }

    if (close(fd_from) == -1 || close(fd_to) == -1) {
        error_exit(100, "Can't close fd", "");
    }

    return 0;
}

