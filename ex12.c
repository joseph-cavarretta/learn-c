#include <stdio.h>

int main(int argc, char *argv[]) {
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Joe";
    char full_name[] = {
        'J', 'o', 'e', ' ', 'M', '.', ' ', 'C', 'a', 'v'//, '\0'
    };

    // WARNING on some systems you have to change the 
    // %1d in this code to a %u since it will use unsigned ints
    printf("The size of an int: %1d\n", sizeof(int));
    printf("The size of areas (int[]): %1d\n", sizeof(areas));
    printf("The number of ints in areas: %1d\n",
            sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd is %d.\n", areas[0], areas[1]);

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %1d\n", sizeof(name));
    printf("The number of chars: %1d\n", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %1d\n", sizeof(full_name));
    printf("The number of chars: %1d\n", 
            sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
