// file: src/data.c

#include "include/data.h"

// Array of strings for the military phonetic alphabet.
const char* PHONETIC_ALPHABET[] = {
    "Alfa", "Bravo", "Charlie", "Delta", 
		"Echo", "Foxtrot", "Golf", "Hotel", 
		"India", "Juliett", "Kilo", "Lima", 
		"Mike", "November", "Oscar", "Papa", 
		"Quebec", "Romeo", "Sierra", "Tango", 
		"Uniform", "Victor", "Whiskey", "X-ray", 
		"Yankee", "Zulu"
};

const size_t PHONETIC_ALPHABET_SIZE = sizeof(PHONETIC_ALPHABET) / sizeof(PHONETIC_ALPHABET[0]);
