//
//  main.c
//  038
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/05/c-program-to-check-alphabet-digit-special-character.html

//Write a C program to input a character from user and check whether given character is alphabet, digit or special character using if else.

#include <stdio.h>

int main() {
    char character;
    
    printf("Enter a char: ");
    scanf("%c",&character);
    
    if ((character>= 'a' && character<= 'z') || (character>= 'A' && character<= 'Z')) {
        printf("%c is alphabet.\n",character);
    } else if (character>= '0' && character<= '9') {
        printf("%c is digit.\n",character);
    } else {
        printf("%c is special character.\n",character);
    }
    
    
    return 0;
}
