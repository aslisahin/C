//
//  main.c
//  061
//
//  Created by Ayşıl Simge Karacan on 25.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-print-a-to-z.html

//Logic to print alphabets from a to z

#include <stdio.h>

int main(void) {
    
    int character='a';
    
    while (character<='z') {
        printf("%c\t",character);
        character++;
    }
    
    return 0;
}
