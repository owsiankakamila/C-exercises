//
// Created by kamila on 09.01.18.
//

void add_init(node_t * head, node_t * tail) { // head's address
    int data =0, choice;





    printf("Data: ");
    scanf("%d", &data);

    // if this is first node
    if (head == NULL) {
        //CREATE NODE
        node_t *n;
        n = (node_t *) malloc(sizeof(node_t));
        if (n == NULL) {
            printf("Error creating a new node.\n");
            exit(0);
        }
        //FILL NODE
        n->data = data;
        // czy da sie zrobic taka fukncje ktora uzpelni wszystko do naszego wskaznika na strukture
        //aadres od pola na które wskazuje wskaznik do struktury

        // NEXT
        n->next = NULL;
        n->prev = NULL;

        //SET HEAD TAIL
        head = n;
        tail = n;

        printf("Successfully added the first node in the list!");

    }

    else {
        printf("ADD ELEMENT:\n");
        printf("1. to the beginning\n");
        printf("2. at the end\n");

        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_to_the_beginning(head, tail,data);
                printf("Successfully added in the beginning!\n");
                break;
            case 2:
                add_at_the_end(head, tail,data);
                printf("Successfully added at the end!\n");
                break;
            default:
                printf("Wrong number!");
                break;

        }
    }
}