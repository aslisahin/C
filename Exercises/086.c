//
//  main.c
//  096
//
//  Created by Ayşıl Simge Karacan on 30.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Christmas Tree Program

#include <stdio.h>

int main(void) {
    int i,j,k;
    
    for (i=1; i<=5; i++) {

        for (k=5-i; k>0 ; k--) {
            printf(" ");
        }

        for (j=i; j>0; j--) {
            printf("* ");
            }

        printf("\n");

    }

    return 0;
}

