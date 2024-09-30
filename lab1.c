#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"
/*
 * readString - reads a line from a file given by
 * fileName and returns it as a c-string.  The line
 * return is removed from the string.
 * 
 * fileName is c-string representing the file to read.
 * 
 */
char* readString(char* fileName){
    FILE* file = fopen(fileName,"r");
    if (file== NULL) {
        fprintf(stderr, "no file found");
    }

    char* str = (char*) malloc(MAX_LINE_LEN *sizeof(char));
    if (str != NULL) {
        fgets(str,MAX_LINE_LEN,file);
        fclose(file);
} else {
    free(str);
}
     return str;
}

/*
 * mysteryExplode - takes a string of characters and explodes it
 * as follows:
 * 
 * A non-empty string such as "Code" is turned into "CCoCodCode".
 *
 *   Return a new string similar to the string given above.
 *
 *  Example:
 *   mysteryExplosion("Code") --> "CCoCodCode"
 *   mysteryExplosion("abc") --> "aababc"
 *   mysteryExplosion(":)") --> "::)"
 * 
 */
char* mysteryExplode(const char* str){
    int length = strlen(str);
    int explodedLength = (length*(length+1))/2 +1;
    char* explodedString =(char*) malloc(explodedLength* sizeof(char));
    if (explodedString==NULL){
        fprintf(stderr, "no input found");
    }
    for(int i = 0; i<length;i++){
        strncpy(explodedString,str,i);
        fprintf("%s", explodedString);
    }
    return explodedString;
}
