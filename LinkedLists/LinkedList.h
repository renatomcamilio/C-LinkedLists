//
//  LinkedList.h
//  LinkedLists
//
//  Created by Renato Camilio on 1/14/15.
//  Copyright (c) 2015 Renato Camilio. All rights reserved.
//

#ifndef __LinkedLists__LinkedList__
#define __LinkedLists__LinkedList__

#include <stdio.h>

typedef struct LinkedList {
    int data;
    struct LinkedList *next;
} LinkedList;

void printListMembers(LinkedList listNode);


#endif /* defined(__LinkedLists__LinkedList__) */
