//
//  main.c
//  036
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-check-alphabet-using-conditional-operator.html

//Write a C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ?:.

#include <stdio.h>

int main(void) {
    char character;
    
    printf("Enter a char: ");
    scanf("%c",&character);
    
    (character>='a' && character<= 'z') || (character>= 'A' && character<= 'Z') ? printf("It is Alphabet\n") : printf("It is not Alphabet\n");
    
    
    return 0;
}
