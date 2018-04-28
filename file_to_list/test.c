#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD 80

typedef struct word_list_member{
    char (*word_add)[]; // plain pointer? address of pointer / address 2th element of pointer
    int how_many;
    struct word_list_member * next;
}word_member;


char * prepare_word(char bufor[]){
    int start;
    int end;
    int flag =1;
    char* word;
    int size_of_word;
    int ind;

    // skip characters different than letters (check only at ends = assume that txt is properly written)
    start =0;
    end= strlen(bufor) -1;
    while (flag==1){
        flag=0; // if nothing will change we can stop searching
        if (bufor[start]==',') {
            start++;
            flag=1;
        }
        if (bufor[end]==','){
            end--;
            flag=1;
        }
    }

    size_of_word = end-start+1;

    // locate word dynamically
    word = (char*) malloc(size_of_word * sizeof(char));
    ind =0;
    for (start;start<=end;start++) {
        word[ind]=bufor[start];
        ind++;
    }

    /*
    //change to small letters
    for (ind =0;ind<size_of_word;ind++){
        word[ind]=word[ind]|0x20; //na bity

    }
*/

    ///printf("%s\n",word);

    return word;
}


void from_file_to_list (){
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
        ///printf("%s\n",bufor);
        word = prepare_word(bufor);

        ///printf("ASCII litery %c ze slowa %s to %d. \n",word[0],word,word[0]);

        // check to which list (index) you should add the word
        which_index= word[0]+1-97;
        ///printf("%d\n", which_index);

        // add word to the list alphabetically (+ check if was before)


    }

    //CLOSE FILE
    fclose(fp);


}

int main() {
    int start;
    // ex: 'a' is a head to the list of words which first letter is 'a'
    word_member *a,*b,*c,*d,*e,*f,*g,*h,*i,*j,*k,*l,*m,*n,*o,*p,*q,*r,*s,*t,*u,*w,*x,*y,*z;

    // create array of the pointers to pointer to the struct word_member
    word_member ** index_arr [26]={&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p,&q,&r,&s,&t,&u,&w,&x,&y,&z};

    // fill every head with NULL
    for(start=0; start<26;start++){
        index_arr[start]=NULL;
    }

    from_file_to_list(index_arr);



    return 0;
}