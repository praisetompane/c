#include <stdio.h>

int main() {
    int bytes = 8;
    printf("char takes %lu byte(s) or %lu bits\n", sizeof(char), sizeof(char)*bytes);
    printf("short takes %lu byte(s) or %lu bits\n", sizeof(char), sizeof(short)*bytes);
    printf("int takes %lu byte(s) or %lu bits\n", sizeof(char), sizeof(int)*bytes);
    printf("long takes %lu byte(s) or %lu bits\n", sizeof(char), sizeof(long)*bytes);
    printf("float takes %lu byte(s) or %lu bits\n", sizeof(char), sizeof(float)*bytes);
    printf("double takes %lu byte(s) or %lu bits\n", sizeof(char), sizeof(double)*bytes);
    return 0;
}