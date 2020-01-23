//
//  main.c
//  100
//
//  Created by Ayşıl Simge Karacan on 8.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//


//Assigning zero to the elements of array


#include <stdio.h>

int main() {
    
    int n[10];
    
    for (size_t i = 0; i<=9; i++) {
        n[i] = 0;
    }
    
    printf("%s%13s\n", "Element","Value");
    
    for (size_t i = 0; i<=9; i++) {
        printf("%zu%15d\n",i,n[i]);
    }
    
    return 0;
}
