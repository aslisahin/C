//
//  main.c
//  102
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

//10-element array s to the values 2, 4, 6, .., 20
//and prints the array in tabular format

#include <stdio.h>

int main() {
    int s[10];
    int i;
    
    
    
    for (i=0; i<=9; i++) {
        s[i] = 2+2*i;
    }
    
    printf("%s\t%s\n","Element","Value");
    
    for (i=0; i<=9; i++) {
        printf("%d\t%d\n",i,s[i]);
    }
    
    return 0;
}
