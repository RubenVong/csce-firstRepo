#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    char *name;
    struct node *next;
};

typedef struct node Node;

void showList(Node *head);

int main(int argc, char *argv[]){
    Node node1;
    Node node2;
    Node node3;

    char thisName[] = "hello";

    node1.value=10;
    node1.name=thisName;
    node1.next=&node2;
    node2.value=20;
    node2.name=thisName;
    node2.next=&node3;
    node3.value=30;
node3.name=thisName;
    node3.next=NULL;

    showList(&node1);
    return 0;
}

void showList(Node *head){
    while(head!=NULL){
        printf("-------------------------------\n");
        printf("Node: %p\n",head);
        printf("Value: %d\n",head->value);
        printf("Name: %d\n",head->name);
        printf("Next Node: %p\n",head->next);
        head = head->next;
    }

}