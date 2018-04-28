#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* funkcja (char bufor [5]){
    int i =0;
    char* word;
    int size;
    for (i=0;i<5;i++){
        printf("%c \n",bufor[i]);
    }
    size=(int)strlen(bufor);
    printf("%d\n", size);
    word = (char*) malloc(5 * sizeof(char));
    for (i=0;i<5;i++){
        word[i] = bufor[i];
    }
    return word;
}

int main(void){
    int i;
    char * word;
    char bufor [5] = "HelLLlo";
    word=(funkcja(bufor));

    for (i=0;i<5;i++){
        printf("%c ",word[i]);

    }

    return  0;
}