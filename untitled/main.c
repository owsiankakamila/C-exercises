#include <stdio.h>
#include <stdlib.h>
#define MAX_WORD 1000

int main() {
    char tab [10][MAX_WORD];0;
    FILE * fp;
    int nr_words = 0, i=0;
    if ((fp=fopen("text.txt","r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    while(nr_words < 10){
        fscanf(fp,"%s",tab[nr_words]);
        nr_words++;

    }

    fclose(fp);

    for (i=0;i<10;i++){
        printf("%s\n",tab[i]);
    }

    return 0;
}