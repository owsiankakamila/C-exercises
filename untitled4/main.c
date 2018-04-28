#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char pole [3][3];
void rysowaniepola(char tablica[], int bok);
int ruchgracza(char pole[3][3],char symb);
int main() {

    char symbol,symbol1,symbol2, tryb;
    int  i, j;
    int bokpola=3;
    int stan=1;
    int grasz=1;
    srand(time(NULL));

    while(grasz==1) {
        /*WYPELNIAM SPACJAMI TABLICE*/

        for (i = 0; i < bokpola; i++) { //<= czy <?
            for (j = 0; j < bokpola; j++) {
                pole[i][j] = ' ';
            }
        }
        rysowaniepola(pole, bokpola);
        /*WYBOR SYMBOLU*/

        printf("1. x\n");
        printf("2. o\n");

        zle1:
        printf("Wybierz swoj symbol:\n");
        scanf(" %c", &symbol);
        getchar();/* JAK POBRAC JEDEN ZNAK?*/
        switch (symbol) {
            case '1': {
                symbol1 = 'x';
                symbol2 = 'o';
                break;
            }
            case '2': {
                symbol1 = 'o';
                symbol2 = 'x';
                break;
            }
            default: {
                printf("Podaj poprawny symbol: ");
                goto zle1;


            }
        }

        printf("Symbol gracza1: %c\nSymbol gracza2: %c\n", symbol1, symbol2);

        /*WYBOR TRYBU*/

        printf("Wybierz tryb gry: \n");
        printf("1. Z innym graczem\n");
        printf("2. Z łatwym komputerem\n");
        printf("3. Z trudnym komputerem\n");

        zle2:
        scanf(" %c", &tryb);/*JEDEN ZNAK!!!*/
        getchar();//zabiera /n

        switch (symbol) {
            case '1': {
                while (stan == 1) {
                    stan = ruchgracza(pole[3][3], symbol1);
                    if (stan == 0) {
                        rysowaniepola(pole[3][3], 3);
                        break;
                    }
                    rysowaniepola(pole[3][3], 3);
                    stan = ruchgracza(pole[3][3], symbol1);
                    if (stan == 0) {
                        rysowaniepola(pole[3][3], 3);
                        break;
                    }
                }
            }
            case '2': {

                break;
            }
            case '3': {

                break;
            }
            default: {
                printf("Podaj poprawny symbol!\n");
                goto zle2;
            }

        }

        printf("KONIEC GRY!\n Chcesz zagrać jeszcze raz?\n");
        printf("1. TAK\n");
        printf("2. NIE\n");

        scanf(" %c", &grasz);
    }

    return 0;
}

void rysowaniepola(char tablica[], int bok){
    int c,d;

    printf("----\n"); ///tu for zaleznie od ilosi pol
    for (c=0;c<bok;c++){
        for (d=0;d<bok;d++){
            printf("| %c ",tablica[c,d]); /*DLACZEGO TO DZIALA?*/
        }
        printf("|\n");
        printf("------------\n");
    }

}
int zwyciestwo(char pole[3][3], char symb){
/* sprawdzam dla x stalych y do boku
   sprawdzam dla y stalych x do boku
   jesli x=y sprawdzam inne x=y*/



}

int easy(char pole[3][3],char symb){
    int x,y,i,j;

    x = rand();
    y = rand();
    pole [x][y]= symb;
}

char ruchgracza(char pole[3][3],char symb){
    int x,y,i,j;
    int sprawdzam=0;

    printf("Ruch %c\n",symb);
    scanf("Wiersz: %d\n",&x);
    scanf("Kolumna: %d\n",&y);

    pole[x][y]=symb;

        /* W KOLUMNIE | */
        for (i = 0; i < 3; i++) { //<= czy <?
            if (pole[x][i] == symb) {
                sprawdzam++;
            }
        }

        if(sprawdzam==3){
            goto koniec;
        }
        sprawdzam=0;

        /* W WIERSZU -*/
        for (i = 0; i < 3; i++) {
            if (pole[i][y] == symb) {
                sprawdzam++;
            }
        }

        if(sprawdzam==3){
            goto koniec;
        }
        sprawdzam=0;

        /*PRZEKATNA \ */
        if (x==y) {
            for (i = 0; i < 3; i++) {
                if (pole[i][i] == symb) {
                    sprawdzam++;
                }
            }
        }

        if(sprawdzam==3){
            goto koniec;
        }
        sprawdzam=0;

        /* PRZEKATNA / x rosna y maleja*/
        for (i = 0; i < 3; i++) {
            for (j=3;j>=0;j--){
                if (pole[i][j] == symb) {
                    sprawdzam++;
            }
            }
        }
    if(sprawdzam==3){
        goto koniec;
    }
    else{
        return 1;
    }

    koniec:
    return 0;


    }



