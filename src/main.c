// File: src/main.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "include/data.h"

#define MAX_LENGTH 1024

void print_phonetic_for_char(char character) {
    char upper_char = toupper(character);

    if (isalpha(upper_char)) {
        size_t index = upper_char - 'A';
        
        if (index < PHONETIC_ALPHABET_SIZE) {
            printf("%s\n", PHONETIC_ALPHABET[index]);
        }
    } else {
        printf("%c\n", character);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <word>\n", argv[0]);
        return 1; 
    }

    if (strlen(argv[1]) > MAX_LENGTH) {
        printf("Error: Max length of %d characters exceeded.\n", MAX_LENGTH);
        return 1; 
    }

    const char* input_word = argv[1];

    printf("Phonetic spelling for '%s' is: \n", input_word);

    for (size_t i = 0; i < strlen(input_word); i++) {
        print_phonetic_for_char(input_word[i]);
    }

    printf("\n");

    return 0; // Return with a success code
}
