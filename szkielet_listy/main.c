#include<stdio.h>
#include<stdlib.h>

/* SZKIELET WERSJA ZE WPISYWANIEM */
// czy da sie zrobic taka fukncje ktora uzpelni wszystko do naszego wskaznika na strukture
//aadres od pola na które wskazuje wskaznik do struktury

typedef struct node{
//modyfikacja program z poprzednich zajec - bufory - adres
    int data;
    struct node* next;
    struct node* prev;
} node_t;



void add_to_the_beginning(node_t ** phead,node_t ** ptail) { //wskazuje  na wskaznik (adres wskaznika)
    int data;
    node_t * head = *phead;
    node_t *n;
    n = (node_t *) malloc(sizeof(node_t));
    if (n == NULL) {
        printf("Error creating a new node.\n");
        exit(0);
    }

    printf("Data: ");
    scanf("%d", &data);
    n->data = data;

    n->next = head;
    n->prev = NULL;

    *phead = n;
    if (head == NULL) {
        *ptail = n;

        printf("Successfully added the first node in the list!\n");
    }
    else
        printf("Successfully added the next node in the list!\n");

}

void add_at_the_end (node_t ** phead,node_t **ptail){
    int data;
    node_t * n = *phead;
    while ((n->next != NULL) && (n!=NULL)) {
        n= n->next;
    }
    n->next = (node_t*) malloc (sizeof(node_t));

    printf("Data: ");
    scanf("%d", &data);
    n->next->data = data;


    n->next->next = NULL;
    n->next->prev = n; //bez taila trzeba w while pozmieniac



    if (*ptail == NULL) {
        *phead=n;
        printf("Successfully added the first node in the list!\n");
    }
    else
        n->prev->next =n;
        printf("Successfully added the next node in the list!\n");



    *ptail = n;
}


void add_to_tail (node_t ** phead, node_t ** ptail) {
    int data;

    node_t *n = (node_t *) malloc(sizeof(node_t));
    if (n == NULL) {
        printf("Error creating a new node.\n");
        exit(0);
    }

    printf("Data: ");
    scanf("%d", &data);
    n->data = data;

    n->prev = *ptail;
    n->next = NULL;


    if (*ptail == NULL) {
        *phead = n;
        printf("Successfully added the first node in the list!\n");
    }
    else
        printf("Successfully added the next node in the list!\n");
    *ptail = n;
}


void print_lr (node_t* head){
    node_t * n = head;
    printf("tu jestem");
    while (n != NULL) {
        printf("%d\n", n->data);
        n = n->next;
    }

}


int main (void){
   /* node_t *head1 = NULL;
    node_t *tail1 = NULL;

    add_to_the_beginning(&head1,&tail1);
    printf("head zawiera %d\n",head1->data);
    printf("tail zawiera %d\n",tail1->data);
    add_to_the_beginning(&head1,&tail1);
    printf("head zawiera %d\n",head1->data);
    printf("tail zawiera %d\n",tail1->data);
    add_to_the_beginning(&head1,&tail1);
    printf("head zawiera %d\n",head1->data);
    printf("tail zawiera %d\n",tail1->data);
    add_to_the_beginning(&head1,&tail1);
    printf("head zawiera %d\n",head1->data);
    printf("tail zawiera %d\n",tail1->data);

    printf("LISTA: \n");
    print_lr(head1);*/


    node_t *head2 = NULL;
    node_t *tail2 = NULL;

    add_to_tail(&head2,&tail2);
    printf("head zawiera %d\n",head2->data);
    printf("tail zawiera %d\n",tail2->data);
    add_to_tail(&head2,&tail2);
    printf("head zawiera %d\n",head2->data);
    printf("tail zawiera %d\n",tail2->data);
    add_to_tail(&head2,&tail2);
    printf("head zawiera %d\n",head2->data);
    printf("tail zawiera %d\n",tail2->data);
    add_to_tail(&head2,&tail2);
    printf("head zawiera %d\n",head2->data);
    printf("tail zawiera %d\n",tail2->data);

    printf("LISTA: \n");
    print_lr(head2);

    node_t *head3 = NULL;
    node_t *tail3 = NULL;

    add_at_the_end(&head3,&tail3);
    printf("head zawiera %d\n",head3->data);
    printf("tail zawiera %d\n",tail3->data);
    add_at_the_end(&head3,&tail3);
    printf("head zawiera %d\n",head3->data);
    printf("tail zawiera %d\n",tail3->data);
    add_at_the_end(&head3,&tail3);
    printf("head zawiera %d\n",head3->data);
    printf("tail zawiera %d\n",tail3->data);
    add_at_the_end(&head3,&tail3);
    printf("head zawiera %d\n",head3->data);
    printf("tail zawiera %d\n",tail3->data);

    printf("LISTA: \n");
    print_lr(head3);








    return 0;
}
