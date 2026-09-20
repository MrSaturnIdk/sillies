/// Print C version

#include <stdio.h>

#ifndef __STDC_VERSION__
#   error macro '__STDC_VERSION__' undefined
#endif

#define ANSI_RESET "\033[0m"
#define ANSI_BOLD "\033[1m"

#define ANSI_RED "\033[31m"

#ifdef _WIN32
#   define isatty(x) 0
#else
#   include <unistd.h>
#endif

int main(int argc, char* argv[]) {
    const int STDERR_TTY = isatty(STDERR_FILENO);
    long versionsRaw[] = {
        199409L,
        199901L,
        201112L,
        201710L,
        202311L
    };
    const char* versionsReadable[] = {
        "C95",
        "C99",
        "C11",
        "C17",
        "C23"
    };
    for (int i = 0; i < sizeof(versionsRaw) / sizeof(versionsRaw[0]); ++i) {
        if (__STDC_VERSION__ == versionsRaw[i]) {
            printf("C version %s found\n", versionsReadable[i]);
            return 0;
        }
    }
    fprintf(stderr, "%s: %serror:%s %scould not find C version%s\n",
        argv[0],
        STDERR_TTY ? ANSI_BOLD ANSI_RED : "",
        STDERR_TTY ? ANSI_RESET : "",
        STDERR_TTY ? ANSI_BOLD : "",
        STDERR_TTY ? ANSI_RESET : ""
    );
    return 1;
}
