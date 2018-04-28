#include<stdio.h>

typedef struct node{
///modyfikacja program z poprzednich zajec - bufory - adres
	int cat_numb;
    char author[20];//pamietanie tylko wskaznikow *nazwisko
	char title[20];
	double price;
	struct node* next;
} node_t;

void add_to_the_beggining(node_t** head) { //arg: address of the head
    // if this is first node (needed??)
    if (head==NULL) {
        head = (node_t*) malloc (sizeof(node_t));
        fill_the_node(head);
        head->next = NULL;
    }
    else {
        node_t * n = head;
        while (n->next != NULL)  {
            n= n->next;
        }
        n->next = (node_t*) malloc (sizeof(node_t));
        fill_the_node(n->next);
        n->next->next = NULL;
    }
    printf("Successfully added!\n")
}

void fill_the_node(node_t** the_node) { // head's address
    printf("Catalog number: ");
    scanf("%d\n",&(the_node->next)); //aadres od pola na które wskazuje wskaznik do struktury
    printf("Author's surname: ");
    scanf("%d\n",&(the_node->next));
    printf("Book's title: ");
    scanf("%d\n",&(the_node->next));
    printf("Price: ");
    scanf("%lf\n",&(the_node->price));
    //if "next node" = scanf("% ? ", *(head->next) niemozliwe dzialanie btw bo po co
}



void add_at_the_end (){


}



int main {
	node_t *head = NULL;
    add_at_beggining(head);
	





	return 0;
}


void prst (struct el_listy* head) {
    struct el_listy *pointer = head;
    while (pointer != NULL)
    {
        //printf() wypisuje
        pointer = pointer.next;
    }
}

void add_at (node_t** head) { //adres wskaznika head jeden czy 2 gwiazdki?
    nowy = malloc(sizeof (struct el_listy)); //pamiec dla nowego elementu //nowy to adres wskaznika do struct
    *nowy.next = head; //nowy wskazuje na obecny pierwszy element //*nowy.next wskaznik na next
    head = nowy; ddje na nowy element;

    // wywolanie wpisywania elementow
}
