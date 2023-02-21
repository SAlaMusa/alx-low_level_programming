#include <stdio.h>
#include <main.h>
/**
 * putchar - calls standard _putchar function. outputs a character
 * @c: character value appendable to string
*/

int _putchar(char c){
    return putchar(c);
}

/**
 * main - Entry point of program
 * 
 * Return 0 on success
*/

int main(){
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return 0;

}