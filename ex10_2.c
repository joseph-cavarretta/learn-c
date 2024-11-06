#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc is an int, number of args passed (argument count)
    // argv is an array of strings (argument vector)
    // A null pointer always follows the last element: argv[argc] is this null pointer

    if (argc > 5) {
        printf("ERROR: Must have less than 5 arguments.\n");
        return 1;
    }

    int i = 0;
    for (i = 1; i < argc; i++) {
        printf("Arg %d: %s\n", i, argv[i]);
    }
    
    char *strings[] = {
        "Idaho", "Peanut", "Alpha", "Dog"
    };
    
    // get length of array in bytes / the size of each element
    int strings_len = sizeof(strings) / sizeof(strings[0]);
    
    for (i = 0; i < strings_len; i++) {
        printf("Item %d: %s\n", i+1, strings[i]);
    }
    
    return 0;
}
