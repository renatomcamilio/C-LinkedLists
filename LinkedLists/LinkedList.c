//
//  LinkedList.c
//  LinkedLists
//
//  Created by Renato Camilio on 1/14/15.
//  Copyright (c) 2015 Renato Camilio. All rights reserved.
//

#include "LinkedList.h"


void printListMembers(LinkedList listNode) {
    printf("%i\n", listNode.data);
    
    if (listNode.next != NULL) {
        printListMembers(*listNode.next);
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
    } else {
        appendNode(list->next, node);
    }
}
