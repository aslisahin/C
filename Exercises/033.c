//
//  main.c
//  035
//
//  Created by Ayşıl Simge Karacan on 14.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//https://codeforwin.org/2015/05/c-program-to-check-vowel-or-consonant.html

//Write a C program to check wheter and alphabet is vowel or consonant using if else.

#include <stdio.h>

int main(void) {
    char character;
    
    printf("Enter a character: ");
    scanf("%c",&character);
    
    if (character=='a' || character=='e' || character=='i' || character=='o' || character=='u' || character=='A' || character=='E' || character=='I' || character=='O' || character=='U') {
        printf("%c is vowel.\n",character);
    } else if ((character >= 'a' && character<='z') || (character>='A' && character<='Z')){ //condition for consonant
        printf("%c is conconant.\n",character);
    } else {
        printf("%c is not an alphabet.\n",character);
    }

    return 0;
}

//Program to check vowel or consonant using ASCII value

#include <stdio.h>

int main(void) {
    char character;
    
    printf("Enter a character: ");
    scanf("%c",&character);
    
    if (character==97 || character==101 || character==105 || character==111 || character==117 || character==65 || character==69 || character==73 || character==79 || character==85) {
        printf("%c is vowel.\n",character);
    } else if ((character >= 97 && character<=122) || (character>=65 && character<=90)){ //condition for consonant
        printf("%c is conconant.\n",character);
    } else {
        printf("%c is not an alphabet.\n",character);
    }

    return 0;
}

