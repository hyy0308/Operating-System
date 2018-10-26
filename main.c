#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sllist.h"
//print the list items from head to tail
void printList(SListNode *theList){
    while(theList!=NULL){
        //cout << theList->data << "";
        printf("%d ", theList->data);
        theList = theList->next;
    }
    printf("\n");
    //cout << endl;
}
//return zero if successful
//return zero if successful
int insertAtEnd(SListNode **theList, int data){
    //SListNode* newNode=new SListNode();
    SListNode *newNode = (SListNode *) malloc(sizeof(SListNode));
    newNode->next=NULL;
    newNode->data=data;
    SListNode* p=*theList;
    if(*theList==NULL)
    {
        *theList=newNode;
    }else
    {
        while(p->next!=NULL)
            p=p->next;
        p->next=newNode;
    }
    return 0;

}
//return zero if successful
int insertSorted(SListNode **theList, int data){
    SListNode* newNode=(SListNode *) malloc(sizeof(SListNode));
    newNode->data = data;
    SListNode* current;
    /* Special case for the head end */
    if (*theList == NULL || (*theList)->data >= newNode->data)
    {
        newNode->next = *theList;
        *theList = newNode;
    }
    else
    {
        /* Locate the node before the point of insertion */
        current = *theList;
        while (current->next!=NULL &&
               current->next->data < newNode->data)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    return 0;
}
//return non-zero value if the value is in the list, otherwise return zero
int isInList(SListNode *theList, int data){
    while(theList!=NULL){
        if(theList->data == data) return 1;
        theList = theList->next;
    }
    return 0;//including head is NULL
}
int deleteFromList(SListNode **theList, int data){
    if (*theList == NULL)
        return 1;
    while (*theList != NULL && (*theList)->data == data) {
        *theList = (*theList)->next;
    }
    if (*theList == NULL)
        return 1;
    SListNode* p = *theList;

    while (p->next != NULL) {
        if (p->next->data== data)
            p->next= p->next->next;
        else
            p = p->next;
    }
    return 0;
}


int main() {
    printf("Hello, World!\n");
    return 0;
}