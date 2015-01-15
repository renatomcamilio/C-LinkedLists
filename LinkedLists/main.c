//
//  main.c
//  LinkedLists
//
//  Created by Renato Camilio on 1/14/15.
//  Copyright (c) 2015 Renato Camilio. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


int main(int argc, const char * argv[]) {
    LinkedList thirdElem = { .data = 3, .next = NULL };
    LinkedList secondElem = { .data = 2, .next = &thirdElem };
    LinkedList firstElem = { .data = 1, .next = &secondElem };
    
    LinkedList newNode = { .data = 6, .next = NULL };
    appendNode(&firstElem, &newNode);
    
    printListMembers(firstElem);
    
    return 0;
}
