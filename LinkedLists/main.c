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
    LinkedList firstElem;
    LinkedList secondElem;
    LinkedList thirdElem;
    
    firstElem.data = 1;
    firstElem.next = &secondElem;
    firstElem.previous = NULL;
    
    secondElem.data = 2;
    secondElem.next = &thirdElem;
    secondElem.previous = &firstElem;
    
    thirdElem.data = 3;
    thirdElem.next = NULL;
    thirdElem.previous = &secondElem;
    
    LinkedList newNode = { .data = 7, .next = NULL };
    appendNode(&firstElem, &newNode);
    
    printListNodes(firstElem);
    
    return 0;
}
