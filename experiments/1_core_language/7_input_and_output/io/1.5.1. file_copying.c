#include <stdio.h>

main() {
    int character;
    //assingments are expressions; with the value of LHS after the assigment
    while((character = getchar()) != EOF) 
        putchar(character);
}

/*
  References:
      Kernighan, B., Ritchie, D. 1988. The C Programming Language. 2nd edition
*/