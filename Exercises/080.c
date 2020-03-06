//
//  main.c
//  080
//
//  Created by Ayşıl Simge Karacan on 15.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Print Hollow Rectangle Star Pattern
/*
 
 ***************
 *             *
 *             *
 *             *
 ***************
 
 */

#include <stdio.h>

int main(void) {
    int rows,i,j,columns;
    
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    
    for (i=1; i<=rows; i++) {

        for (j=1; j<=columns; j++) {

            if (i==1 || j==1 || j==columns || i==rows) {
                printf("*");
            } else {
                printf(" ");
            }

        }
        
        printf("\n");
    }
    
    
    
    return 0;
}
