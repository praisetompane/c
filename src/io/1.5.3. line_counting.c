#include <stdio.h>

main() {
    int lineNumbers = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if(c == '\n') {
            lineNumbers += 1;
        }
    }
    printf("Number of lines: %d\n", lineNumbers);
}

/*
  References:
      Kernighan, B., Ritchie, D. 1988. The C Programming Language. 2nd edition
*/