#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node *next;
};

struct Node *head;

void insertTail(int a){
    struct Node *newItem ;
    newItem = (struct Node *)malloc(sizeof(struct Node));
    newItem->value = a ;
    newItem->next = NULL ;

    struct Node *last = head ;
    while(last->next != NULL){
         last = last->next ;
    }
    last->next = newItem ;
}

int main() {

    struct  Node *first = NULL;
    struct  Node *second = NULL;
    struct  Node *third = NULL;
    first =  (struct Node *)malloc(sizeof(struct Node)) ;
    second =  (struct Node *)malloc(sizeof(struct Node)) ;
    third =  (struct Node *)malloc(sizeof(struct Node)) ;
    first->value = 15;
    second->value = 20;
    third->value = 25;
    first->next = second;
    second->next = third;
    third->next = NULL ;
    head = first ;
    
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a) ;
    insertTail(a) ;
    
    while(head != NULL) {
       printf("%d\n",head->value);
       head = head->next;
    }

    return 0 ;

}