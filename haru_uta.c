#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node *next;


};

struct Node* rev_list(struct Node* head){
    struct Node *previous  = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL){

    next = current -> next;
    current -> next = previous;
    previous = next;
    current = next;

}

    return previous;



}

void append(struct Node** head_r, int n_data){
    struct Node* node_n = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last =  *head_r;

    node_n -> data = n_data;
    node_n -> next = NULL;

    if(*head_r == NULL){
        *head_r = node_n;
        return;
    }

    while(last -> next != NULL){
            last = last -> next;
    }

    last -> next = node_n;
}

void printlist(struct Node* node){
    while(node != NULL){
        printf("%d ", node -> data);
        node = node -> next;
    }
    printf("NULL");
}



int main(){


    struct Node* head = NULL;

    append(&head , 10);
    append(&head , 20);
    append(&head , 30);
    append(&head , 40);

    printf("Original Linked List: ");
    printlist(head);


    head = rev_list(head);

    struct Node* temp;
    while(head != NULL){
        temp = head;
        head = head -> next;
        free(temp);
    }

    return 0;
}
