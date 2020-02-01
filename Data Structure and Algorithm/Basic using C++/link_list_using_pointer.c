#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *create_node(int item, struct node *next){
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    if(new_node == '\0'){
        printf("Error! could not create a new node\n");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;

    return new_node;
};
int main()
{
    struct node *n;
    n = create_node(10, '\0');
    printf("data = %d\n",n->data);
    return 0;
}
