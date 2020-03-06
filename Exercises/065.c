//
//  main.c
//  065
//
//  Created by Ayşıl Simge Karacan on 25.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//C Program to Display Fibonacci Sequence

#include <stdio.h>

int main(void) {
    //0,1,1,2,3,5
    int n,i=1,t1=0,t2=1,next;
    
    printf("Enter a number of terms: ");
    scanf("%d",&n);
    
    while (i<=n) {
        
        printf("%d, ",t1);
        
        next = t1+t2;
        t1 = t2;
        t2 = next;
        
        i++;
    }
    
    return 0;
}
