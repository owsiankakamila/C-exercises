#include <stdio.h>

int main() {

    /* zlicz cyfry,biale znaki,inne */

    int c, i,nwhite,nother;
    int ndigit[10];

    nwhite = nother = 0;

    for (i=0;i<10;i++)
        ndigit[i] =0;

    while ((c=getchar()) != EOF)
    {
        if (c>='0' && c<='9')
            ++ndigit[c - '0'];

        else if (c== ' ' || c=='\n' || c== '\t')
            ++nwhite;
        else
            ++nother;

    }

    printf ("cyfry=");

    for (i=0;i<10;++i)
        printf(" %d:%d",i,ndigit[i]);
    printf("\n biale znaki: %d\ninne: %d\n",nwhite,nother);




    return 0;
}
