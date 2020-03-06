//
//  main.c
//  039
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/09/c-program-to-check-whether-character-is-uppercase-or-lowercase.html

//Write a C program to input character from user and check whether character is uppercase or lowercase alphabet using if else.

#include <stdio.h>

int main(void) {
    char character;
    
    printf("Enter a char: ");
    scanf("%c",&character);
    
    if ((character>= 'a' && character<= 'z')) {
        printf("%c is lowercase alphabet.\n",character);
    } else if ((character>= 'A') && (character<= 'Z')) {
        printf("%c is uppercase alphabet.\n",character);
    } else {
        printf("%c is not alphabet.\n",character);
    }
    
    return 0;
}
