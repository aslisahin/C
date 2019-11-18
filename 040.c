//
//  main.c
//  040
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/09/c-program-to-check-whether-character-is-uppercase-or-lowercase.html

//Program to check uppercase or lowercase characters using library functions


#include <stdio.h>
#include <ctype.h>

int main(void) {
    char character;
    
    printf("Enter a character: ");
    scanf("%c",&character);
    
    if (isupper(character)) {
        printf("%c is uppercase alphabet\n",character);
    } else if(islower(character)){
        printf("%c is lowercase alphabet\n",character);
    } else {
        printf("%c is not alphabet\n",character);
    }
    
    return 0;
}
