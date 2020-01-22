//
//  main.c
//  082
//
//  Created by Ayşıl Simge Karacan on 30.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Print the numbers from 1 to 30 with do while

#include <stdio.h>

int main(void) {
    int counter = 1;
    
    do {
        printf("%d\n",counter);
        counter += 1;
    } while (counter<=30);
    
    return 0;
}
