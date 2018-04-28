#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct word_list_member{
    char *word_add; // plain pointer? address of pointer / address 2th element of pointer
    int how_many;
    struct word_list_member * next;
}word_member;


int main() {
    int start;
    // ex: 'a' is a head to the list of words which first letter is 'a'
    word_member *a,*b,*c;
    word_member **pa;
    word_member **pa2;

    // create array of the pointers pointing on the struct word_member
    word_member ** index_arr [3]={&a,&b,&c}; // tablica wskaznikow wskazujacych na word_member
    word_member **(*pindex_arr)[]= &index_arr; //wskaznik na tablice skaznikow wskazujacych na word_member





    a=(word_member*) malloc(sizeof(word_member));
    b=(word_member*) malloc(sizeof(word_member));

    pa =(*pindex_arr)[0];
    pa2= &a;

    printf("pa:             %p\n",pa2);
    printf("pa2         :   %p\n",pa);

    printf("ADRES a:        %p\n",&a);
    printf("index_arr[0]:   %p\n",index_arr[0]);
    printf("(*pindex_arr)[0]%p\n\n",(*pindex_arr)[0]);

    printf("adres b:        %p\n",&b);
    printf("index_arr[1]:   %p\n",index_arr[1]);
    printf("(*pindex_arr)[1]%p\n\n",(*pindex_arr)[1]);






    printf("wartosc a:      %p\n",a);
    printf("*index_arr[0]:  %p\n\n",*index_arr[0]);
    printf("wartosc b:      %p\n",b);
    printf("*index_arr[1]:  %p\n\n",*index_arr[1]);

    printf("&index_arr:     %p\n",&index_arr);
    printf("index_arr:      %p\n",index_arr);
    printf("&index_arr[0]:  %p\n",&index_arr[0]);
    printf("*pindex_arr:    %p\n\n",*pindex_arr);

    printf("&index_arr[1]:  %p\n",&index_arr[1]);




    return 0;
}