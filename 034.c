//
//  main.c
//  034
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/05/c-program-to-check-alphabet.html

//Write a C program to input a character from user and check whether the given character is alphabet or not using if else.

#include <stdio.h>

int main(void) {
    
    char character;
    
    printf("Enter a char: ");
    scanf("%c",&character);
    
    if ((character>='a' && character<='z') && (character>='A' && character<='Z')){
        printf("%c is alphabet",character);
    } else {
        printf("%c is not alphabet",character);
    }
    
    
    return 0;
}

//Program to check alphabets using ASCII value

#include <stdio.h>

int main(void) {
    
    char character;
    
    printf("Enter a char: ");
    scanf("%c",&character);
    
    if ((character>=97 && character<=122) && (character>=65 && character<=90)){
        printf("%c is alphabet",character);
    } else {
        printf("%c is not alphabet",character);
    }
    
    
    return 0;
}
