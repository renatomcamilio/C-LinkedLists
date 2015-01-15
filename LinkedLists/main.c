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
    
    LinkedList *result = searchValue(&firstElem, 4);
    if (!result) {
        printf("Element not found\n");
    } else {
        printf("%i\n", result->data);
    }
    
    return 0;
}
