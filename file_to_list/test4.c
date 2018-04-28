// STRING COMPARE
// KTORY JEST PIERWSZY W ALFABECIE


#include <stdio.h>
#include <string.h>

int main (void) {
    char s1[] = "a";
    char s2[] = "b";

    if (strcmp(s1, s2) == 0)
        printf("Lancuchy s1 i s2 sa takie same");
    else if (strcmp(s1, s2) > 0)
        printf("Lancuch s1 > od s2, jest 2.");
    else
        printf("Lancuch s1 < od s2, jest 1.");

    //program wyświetli: Lancuchy s1 i s2 sa takie same

    return 0;
}

