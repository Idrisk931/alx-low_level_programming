#include <stdio.h>

/**
 * main -program that prints the alphabet in lowercase,
 *       followed by a new line
 *
 * Return:0
 *
 */
int main() {
    char letter;

    // Print lowercase alphabet using putchar
    for (letter = 'a'; letter <= 'z'; letter++) {
        putchar(letter);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}
