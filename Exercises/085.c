//
//  main.c
//  085
//
//  Created by Ayşıl Simge Karacan on 30.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Creating a user-defined function
//Calculate and print the squares of the integers from 1 to 15.

#include <stdio.h>
#include <math.h>

int square(int x);

int main(void) {
    
    for (unsigned int i = 1; i<=15; i++) {
        printf("%d\n",square(i));
    }
    
    return 0;
}

int square(int x){
    
    return pow(x,2);
}
