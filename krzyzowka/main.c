#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE * fp;

    fp = fopen("pl.txt","r");
    if (fp == NULL){
        printf("File not found \n");
        exit(1);
    }

    fseek(fp,0,0);
    long offset = ftell(fp);
    printf("to:%cznak\n", fgetc(fp));
    fclose(fp);


    return 0;
}
