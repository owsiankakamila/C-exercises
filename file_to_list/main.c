#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD 80

typedef struct word_list_member{
    char *word; // plain pointer? address of pointer / address 2th element of pointer
    int how_many;
    struct word_list_member * next;
}word_member;

char * prepare_word(char bufor[MAX_WORD]){
    int start;
    int end;
    int flag =1;
    char* word;
    int size_of_word;
    int ind;

    // skip characters different than letters (check only at ends = assume that txt is properly written)
    start =0;
    end=  (int)strlen(bufor) -1;
    while (flag==1){
        flag=0; // if nothing will change we can stop searching
        if ((bufor[start]==',') ||(bufor[start]=='.') ||(bufor[start]=='(')||(bufor[start]=='[')||(bufor[start]=='{')){
            start++;
            flag=1;
        }
        if ((bufor[end]==',') ||(bufor[end]=='.') ||(bufor[end]==')')||(bufor[end]==']')||(bufor[end]=='}')){
            end--;
            flag=1;
        }
    }

    size_of_word = end-start+1;

    // locate word dynamically
    word = (char*) malloc(size_of_word * sizeof(char));

    ind =0;
    for (start;start<=end;start++) {
        //change to small letters
        bufor[start]=tolower(bufor[start]);

        //save changed word
        word[ind]=bufor[start];
        ind++;
    }



    return word;
}


void from_file_to_list (word_member **(*pindex_arr)[26]){ //wskaznik na tablice skaznikow wskazujacych na wskazniki do word_member
    FILE *fp;
    char bufor [MAX_WORD];
    char *word;
    int which_index;

    //OPEN FILE
    if ((fp=fopen("t.txt", "r"))==NULL) {
        printf ("Nie mogę otworzyć pliku test.txt!\n");
        exit(1);
    }

    // read from file word by word till EOF
    while( fscanf(fp, "%79s", bufor) != EOF )
    {
        printf("Took %s ", bufor);

        word = prepare_word(bufor); //word = address of the word
        printf(" and format properly to %s",word);

        // check to which list (index) you should add the word
        which_index= word[0]-97;
        printf(" and add to index %d\n", which_index); //np. &a



        // add word to the list alphabetically (+ check if was before)
        add_to_list((*pindex_arr)[which_index],word);


    }

    //CLOSE FILE
    fclose(fp);
}

void add_to_list(word_member ** phead, char* word) {
    word_member *pointer = *phead;
    word_member *new = NULL;
    int added = 0;

    //first element
    if (pointer == NULL) {
        new = (word_member *) malloc(sizeof(word_member));
        new->word = word;
        new->how_many = 1;
        new->next = NULL;
        pointer = new;
        *phead = new;
    }
        // pointer1. = word
    else if ((strcmp(word,pointer->word) == 0)){
        pointer->how_many +=1;
    }
        //word, pointer1.
    else if ((strcmp(word,pointer->word) < 0)){
        new = (word_member *) malloc(sizeof(word_member));
        new->word = word;
        new->how_many = 1;
        new->next = pointer;
    }
        // pointer1., word
    else{
        while ((pointer->next != NULL) && (added==0)) {
            // after-pointer =word
            if (strcmp(word, pointer->next->word) == 0) {
                pointer->next->how_many++;
                added=1;
            }
                //pointer, word, after-pointer
            else if (strcmp(word, pointer->next->word) < 0) {
                new = (word_member *) malloc(sizeof(word_member));
                new->word = word;
                new->how_many = 1;
                new->next = pointer->next;
                pointer->next = new;
                added=1;

            }
                //pointer, after-pointer, word
            else {
                pointer = pointer->next;
            }
        }
        // add to the end
        if (added==0) {
            new = (word_member *) malloc(sizeof(word_member));
            new->word = word;
            new->how_many = 1;
            new->next = pointer->next;
            pointer->next = new;

        }

    }

}

int all_words(word_member **index_arr[26]){
    int index=0;
    int all_words=0;
    for(index=0;index<26;index++) {
        if (*index_arr[index] != NULL) {
            all_words += all_words_in_index(*index_arr[index]);
        }
    }
    return all_words;
}

int all_words_in_index(word_member* head){
    int all_in_index=0;
    while (head != NULL){
        all_in_index+=head->how_many;
        head=head->next;
    }
    return all_in_index;
}

int diff_words(word_member **index_arr[26]){
    int index=0;
    int diff_words=0;
    for(index=0;index<26;index++) {
        if (*index_arr[index] != NULL) {
            diff_words += diff_words_in_index(*index_arr[index]);
        }
    }
    return diff_words;
}

int diff_words_in_index(word_member * head){
    int diff_in_index=0;
    while (head!= NULL){
        diff_in_index+=1;
        head=head->next;
    }
    return diff_in_index;
}


char longest_word(word_member **index_arr[26]){
    int index=0;
    int all_words=0;
    char* longest=NULL;
    for(index=0;index<26;index++) {
        if (*index_arr[index] != NULL) {
            // if in some index word is longer
            longest = longer_in_index(*index_arr[index],longest);
        }
    }
    return *longest;
}

char* longer_in_index(word_member * head, char* longest){
    while (head!= NULL){
        if (strlen(longest)< strlen(head->word));
            longest = head->word;
        head=head->next;
    }
    return longest;
}




int main() {
    int start;
    // ex: 'a' is a head to the list of words which first letter is 'a'
    word_member *a,*b,*c,*d,*e,*f,*g,*h,*i,*j,*k,*l,*m,*n,*o,*p,*q,*r,*s,*t,*u,*v,*w,*x,*y,*z;

    // create array of the pointers to pointer to the struct word_member
    word_member ** index_arr [26]={&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p,&q,&r,&s,&t,&u,&v,&w,&x,&y,&z};

    // &index_arr = index_arr = &index_arr[0] -- where is array in memory (address)
    // index_arr[0] = &a -- what is in the first element of the array
    // *index_arr[0] = a -- on what points pointer in the first element of array
    printf("cokolwiek\n");
    for(start=0; start<26;start++){
        *index_arr[start]=NULL;
    }


    from_file_to_list(&index_arr);
    //printf("\n%d\n", funkcja(index_arr));
    printf(" All words: %d\n",all_words(index_arr));
    printf(" Diff words: %d\n",diff_words(index_arr));
    printf ("Longest word: %s\n",longest_word(index_arr));





    return 0;
}

/*
//alfabetycznie
void add_alphabetically_to_list(word_member ** phead, char* word){ //head has addres to the memory
    word_member *head = *phead;
    int i=1;
    int running=1;
    int was_added=0;
    if (*phead ==NULL){
        word_member * new = (word_member*) malloc(sizeof(word_member));
        new->word = word;
        new->how_many =1;
        new->next =NULL;
        *phead = new;
    }
    else{
        while (i<(int)strlen(word)){

            if (((int)head->word)==i){  // jesli dlugosc head ==i to wyraz jest jakby pierwszy
                //dodaj po head
            }

            if ((int)head->word[i]> (int)word[i]){
                //dodaj przed head
                was_added=1;
            }
            else if ((int)head->word[i]==(int)word[i]) {
                i++;
            }
            else if ((int)head->word[i]< (int)word[i]){
                while (running==1){
                    if (head->next == NULL){
                        // dodaj po head
                        was_added=1;
                        running=0;
                    }
                    else if ((int)head->next->word[i]> (int)word[i]){
                        //dodaj po head
                        was_added=1;
                        running=0;
                    }
                    else if ((int)head->next->word[i]==(int)word[i]){
                        i++;
                        running=0;
                    }
                    else if ((int)head->next->word[i]< (int)word[i]){
                        head = head->next;
                    }
                }
            }
        }
        if (was_added==0){
            if ((int)strlen(word)<(int)strlen(head->word)) {
                //dodaj przed
            }
            else{
                head->how_many+=1;
            }
        }
    }


}*/

/*
 * void add_to_list(word_member ** phead, char* word){
    word_member *head = *phead;
    int i=1;
    int are_idenical =1;
    int not_found = 1;
    if (*phead ==NULL){
        word_member * new = (word_member*) malloc(sizeof(word_member));
        new->word = word;
        new->how_many =1;
        new->next =NULL;
        *phead = new;
    }
    else{
        while ((not_found ==1) && (head->next != NULL)){ //dopoki slowo nie zostalo znalezione i nie doszlismy do konca tablicy

            //jesli nasze slowo NIE ma tyle samo liter co wskazywane slowo w liscie
            if(((int)strlen(word))!=(int)strlen(head->word)){
                head=head->next;
            }

            //jesli nasze slowo ma tyle samo liter co wskazywane slowo w liscie
            else{

                // dopoki nasze slowo ma litery i jest identyczne ze  wskazywanym slowem wliscie
                while ((i<(int)strlen(word))&& (are_idenical==1)){
                    if ((int)head->word[i]==(int)word[i]) { //gdy i-te litery sa rowne
                        i++; //spr nastepna litere
                    }
                    else{ // nie sa rowne
                        are_idenical =0; //nie sa identyczne
                    }
                }
                //wyjsie z while (koniec liter albo ktoras litera sie rozni)

                if (are_idenical==1){ //jesli koniec liter (wszystkie litery byly sobie rowne)
                    head->how_many+=1;
                    not_found=0; // znaleziono
                }
                else{ // jesli ktoras z liter sie rozni
                    head=head->next; // idz do nastepnego slowa w liscie
                }
            }
        }
        if ((head->next ==NULL)&&(not_found==1)){ //jesli doszlismy do kocna tablicy i nie znaleziono  identycznego
            word_member * new = (word_member*) malloc(sizeof(word_member));
            new->word = word;
            new->how_many =1;
            new->next =NULL;
        }

    }

}
 */