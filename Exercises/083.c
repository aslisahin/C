//
//  main.c
//  083
//
//  Created by Ayşıl Simge Karacan on 30.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Using break in for statement. We are incrementing from 1 to 20.
//When the counter is equal 8, it will break.

#include <stdio.h>

int main(void) {
    
    for (unsigned int i = 1; i<=20; i++) {
        if (i == 8) {
            break;
        }
        printf("%d\n",i);
    }
    
    return 0;
}
