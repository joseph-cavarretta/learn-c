#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    
    if (argc == 1) {
        printf("you only have one argument, you suck.\n");
    } else if (argc > 1 && argc < 4) {
        printf("here's your arguments:\n");

        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("you have too many arguments.\n");
    }

    return 0;
}
