#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node_t;



void add_to_the_beginning(node_t ** phead) { //wskazuje  na wskaznik (adres wskaznika)
    int data;
    node_t * head = *phead;

    node_t *new = (node_t *) malloc(sizeof(node_t));

    if (new == NULL) {
        printf("Error creating a new node.\n");
        exit(0);
    }

    printf("Data: ");
    scanf("%d", &data);
    new->data = data;
    new->next = head;

    *phead = new;

    if (head == NULL) {
        printf("Successfully added the first node in the list!\n");
    }
    else
        printf("Successfully added the next node in the list!\n");

}

void add_at_the_end (node_t ** phead){
    int data;
    node_t * last = *phead;
    // tworze nowy element gdziekolwiek
    node_t * new= (node_t*) malloc (sizeof(node_t));
    if (new == NULL) {
        printf("Error creating a new node.\n");
        exit(0);
    }
    printf("Data: ");
    scanf("%d", &data);
    new->data = data;
    new->next = NULL;

    // jesli to pierwszy element to zostanie "głową" listy
    if (*phead ==NULL) { // uzywam *phead zamiast last dla czytelnosci
        *phead = new;
        printf("Successfully added the first node in the list!\n");
    }
        //jesli nie to last skacze po liscie az znajdzie swoje miejsce(będzie ostatnim elementem CZYLI takim ktorego pole next = NULL)
    else {
        while (last->next != NULL)  {
            last= last->next;
        }
        last->next =new; // do ostatniego elementu listy (last) doczepiam nasz nowy element (new)
        printf("Successfully added the next node in the list!\n");
    }

}


void print_lr (node_t* head){
    node_t * n = head;

    while (n != NULL) {
        printf("%d\n", n->data);
        n = n->next;
    }

}


int main (void){
    node_t *head1 = NULL;


    add_to_the_beginning(&head1);
    add_to_the_beginning(&head1);
    add_to_the_beginning(&head1);
    add_to_the_beginning(&head1);


    printf("head zawiera %d\n",head1->data);
    printf("LISTA: \n");
    print_lr(head1);


    node_t *head2 = NULL;
    add_at_the_end(&head2);
    add_at_the_end(&head2);
    add_at_the_end(&head2);
    add_at_the_end(&head2);



    printf("head zawiera %d\n",head2->data);
    printf("LISTA: \n");
    print_lr(head2);


    return 0;
}
