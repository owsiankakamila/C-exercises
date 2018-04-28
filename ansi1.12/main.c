#include <stdio.h>
#define IN 1
#define OUT 0
int main( )
{
    int c;
    int state;
    while((c=getchar()) != EOF)
    {
        if (c=='\n' || c=='\t' || c==' ')
        {
            state = OUT;
            c='\n';
            putchar(c);
        }
        else
        {
            state = IN;
            putchar(c);
        }
    }
}