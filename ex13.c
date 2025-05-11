#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;

    // go through each string in argv
    // why do we skip argv[0]?
    // because it is the file name
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // make our own array of strings
    char *states[] = {
        "CA", "OR", "PA", "WV"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
