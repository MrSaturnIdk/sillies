/// Will the compiler find the random null terminators?

#include <stddef.h>
#include <stdio.h>

int main(void) {
    char ntarr[] = {'B', 'u', 'r', 'g', 'e', 'r'};
    char* ntptr = ntarr;

    size_t amount = 0;
    for (int i = 0; ntptr[i] != '\0'; ++i) {
        printf("%c", ntptr[i]);
        ++amount;
    }
    printf("\nAmount of times to find '\\0': %zu\n", amount);

    return 0; /// If it works at all
}
