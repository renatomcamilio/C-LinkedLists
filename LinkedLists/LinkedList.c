//
//  LinkedList.c
//  LinkedLists
//
//  Created by Renato Camilio on 1/14/15.
//  Copyright (c) 2015 Renato Camilio. All rights reserved.
//

#include "LinkedList.h"

void printListNodes(LinkedList *listNode) {
    LinkedList *previous = (!listNode->previous) ? NULL : listNode->previous;
    LinkedList *next = (!listNode->next) ? NULL : listNode->next;

    printf("previous: %i, me: %i, next: %i\n",
           (!previous ? 0 : previous->data),
           listNode->data,
           (!next ? 0 : next->data));
    
    if (listNode->next != NULL) {
        printListNodes(listNode->next);
    }
}

LinkedList *searchValue(LinkedList *list, int value) {
    if (list->next != NULL) {
        if (list->data == value) {
            return list;
        }
        
        return searchValue(list->next, value);
    }
    
    return NULL;
}

void appendNode(LinkedList *list, LinkedList *node) {
    if (list->next == NULL) {
        node->next = NULL;
        list->next = node;
        node->previous = list;
    } else {
        appendNode(list->next, node);
    }
}

void removeNode(LinkedList *node) {
    LinkedList *next = node->next;
    LinkedList *previous = node->previous;
    
    if (previous) {
        previous->next = (!next) ? NULL : next;
    }
    
    if (next) {
        next->previous = (!previous) ? NULL : previous;
    }

}

