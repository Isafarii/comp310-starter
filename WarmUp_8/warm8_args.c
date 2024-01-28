#include <stdio.h>
#include <stdlib.h>
//initial linkedlist structure
struct node {
    int value; //store a num
    struct node* next; //add next pointer, pponts to next pointer

};
struct node *deletenode(struct node **head_ref, int key){
    //check if empty
    if(*head_ref == NULL) return NULL;

    struct node *temp = *head_ref, *prev = NULL;

    if(temp != NULL && temp->value == key){
        *head_ref = temp->next;
        free(temp);
        return *head_ref;
    }
    while (temp != NULL && temp->value != key){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) return *head_ref;

    prev->next=temp->next;

    free(temp);
     //set prev->next to null if tempnext is null
    if(prev->next ==NULL){
        prev = NULL;
    }

    return *head_ref;
}

void printList(struct node *nhead){
    struct node *i = nhead; 
    while(i != NULL){
        printf("%d ",i->value);
        i = i->next;
    }
    printf("\n");
}
void push(struct node **nhead, int new_value){
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL){
        return;
    }
    new_node->value = new_value;
    new_node->next = *nhead;
    *nhead = new_node;
}
int main(){
    //add elem operations to list
    struct node* node1 = malloc(sizeof(struct node));
    node1->value =1;

    struct node* node2 = malloc(sizeof(struct node));
    node2->value = 2;
    node1->next = node2;//node1 next is init'd 2

    struct node* node3 = malloc(sizeof(struct node));
    node3->value = 3;
    node2->next = node3;//node2 next is init'd 3
    node3->next = NULL; //after node3next = null

    struct node* nhead = node1;

    printf("List: \n");
    printList(nhead);

    deletenode(&nhead, 2);

    printf("After deletenode for 2: \n");
    printList(nhead);

    push(&nhead,0);

    printf("Push 0: \n");
    printList(nhead);

    free(node1);
    //funct delnode frees node2
    free(node3);

    return 0;//success
}

