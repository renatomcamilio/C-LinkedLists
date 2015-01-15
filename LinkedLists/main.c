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
    LinkedList firstNode = { .data = 1, .next = NULL };
    
    LinkedList secondNode = { .data = 2, .next = NULL };
    appendNode(&firstNode, &secondNode);
    
    LinkedList thirdNode = { .data = 3, .next = NULL };
    appendNode(&firstNode, &thirdNode);
    
    LinkedList fourthNode = { .data = 4, .next = NULL };
    appendNode(&firstNode, &fourthNode);

    
    printListNodes(&firstNode);

    printf("=========\n");
    
    removeNode(&firstNode);
    
    printListNodes(&secondNode);
    
    return 0;
}
