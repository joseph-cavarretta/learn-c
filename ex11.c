#include <stdio.h>

int main(int argc, char *argv[]) {
    int numbers[4] = { 0 };
    char name[4] = { 'a' };

    // first print them as-is
    printf("numbers: %d %d %d %d\n", 
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    // set up numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // set up the name
    name[0] = 'J';
    name[1] = 'o';
    name[2] = 'e';
    name[3] = '\0';

    // print the new values as initialized
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);
    
    printf("name: %s\n", name);

    // another way to use name
    char *another = "Joe";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n",
            another[0], another[1], another[2], another[3]); 

    return 1;
}
