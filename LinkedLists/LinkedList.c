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
