//
//  main.c
//  048
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-check-vowel-or-consonant-using-switch-case.html

//Write a C program to input an alphabet and check whether it is vowel or consonant using switch case

#include <stdio.h>

int main(void) {
    char character;
    
    printf("Input a char: ");
    scanf("%c",&character);
    
    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
            
        default:
            printf("Consonant\n");
            break;
    }
    
    return 0;
}
