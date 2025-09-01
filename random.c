#include<stdlib.h>
#include<string.h>
#include<time.h>


char* rand_string(char* s, size_t size) {
    // array holding possible letters in the random word
    char possibleLetter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    // for loop to assign a random letter to each index in array s up to its size
    for (int i = 0; i < size; i++) {
        //sizeOf to get total bytes of array, -1 to consider null terminator
        s[i] = possibleLetter[rand() % (sizeof(possibleLetter) - 1)]; // pick a random letter in array of possibleLetter
    }
    s[size] = '\0'; // end string array with null terminator
    return s;
}