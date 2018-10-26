//
// Created by hyy on 10/26/2018.
//

#ifndef SINGLELINKEDLIST_SLLIST_H
#define SINGLELINKEDLIST_SLLIST_H
typedef struct slistStruct{
    int data;
    struct slistStruct *next;
} SListNode;
void printList(SListNode *theList);
int insertAtEnd(SListNode **theList, int data);
int insertSorted(SListNode **theList, int data);
int isInList(SListNode *theList, int data);
int deleteFromList(SListNode **theList, int data);

#endif //SINGLELINKEDLIST_SLLIST_H
