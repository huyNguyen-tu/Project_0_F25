#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function prototype
char* rand_string(char* s, size_t size);  // prototype for function to be developed by the student

// random string generator wrapper function
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size); // to be developed by the student
     }
     return s;
}

int main()

{
    char *str;
    size_t size =  30;  //specify a value for size of word

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
    str = rand_string_alloc(size);
    printf("%s\n",str);
    free (str);
    

	return(0);
}


//function implementation
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