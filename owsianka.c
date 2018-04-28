// Kamila Owsianka grupa 1
// 17.09.2018 godzina 18:00

#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int dlugosc;
    double *elementy;
} ciag;

ciag * wczytaj_ciag(){
    int dlugosc;
    int i;
    double *elementy;
    ciag *new = (ciag *) malloc(sizeof(ciag));

    scanf("%d",&dlugosc);
    new->dlugosc = dlugosc;
    new->elementy = (double*) malloc(dlugosc*sizeof(double));
    for (i=0;i<dlugosc;i++){
        scanf("%lf",&(new->elementy)[i]);

    }
    //tu jest blad = w momencie wczytywania elementow, scanf zle je czyta(nie po spacjach), powinien byc uzyty sfromatowany fgets

    return new;
}

void licz_srednia(ciag ** tab_ciagow, int ile_ciagow, double tab_srednich[2], int tab_dlugosci[2]){
    int i=0;
    int j;

    double srednia=0;
    double najwieksza_srednia=0;
    double najmniejsza_srednia=0;

    int najwieksza_dlugosc=0;
    int najmniejsza_dlugosc=0;

    tab_srednich[0]=najwieksza_srednia;
    tab_srednich[1]=najmniejsza_srednia;

    tab_dlugosci[0]=najwieksza_dlugosc;
    tab_dlugosci[1]=najmniejsza_dlugosc;



    while (i<ile_ciagow){
        srednia=0;
        for (j=0;j<tab_ciagow[i]->dlugosc;j++){
            srednia += tab_ciagow[j]->elementy[j];
        }
        if (srednia>najwieksza_srednia){
            najwieksza_srednia=srednia;
            najwieksza_dlugosc=tab_ciagow[j]->dlugosc;
        }
        if (srednia<najmniejsza_srednia){
            najmniejsza_srednia=srednia;
            najmniejsza_dlugosc=tab_ciagow[j]->dlugosc;
        }
        i++;
    }


}


int main() {
    int ile_ciagow;
    int i=0;
    double tab_srednich[2];
    int tab_dlugosci[2];
    ciag ** tab_ciagow;

    printf("Podaj liczbe ciagow:");
    scanf("%d",&ile_ciagow);
    printf("\n");
    tab_ciagow = (ciag**) malloc(ile_ciagow*sizeof(ciag*));

    while (i<ile_ciagow){
        tab_ciagow[i]=wczytaj_ciag();

        i++;
    }

    licz_srednia(tab_ciagow,ile_ciagow,tab_srednich,tab_dlugosci);

    printf("Najwieksza srednia to %lf obliczona dla %d cyfr.\n", tab_srednich[0],tab_dlugosci[0]);
    printf("Najmniejsza srednia to %lf obliczona dla %d cyfr.\n", tab_srednich[1],tab_dlugosci[1]);



    return 0;
}