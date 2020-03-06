//
//  main.c
//  059
//
//  Created by Ayşıl Simge Karacan on 24.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//3.22 (Checking if a Number is Prime) A prime number is any natural number greater than 1 that is divisible only by 1 and by itself. Write a C program that reads an integer and determines whether it is a prime number or not.

#include <stdio.h>

int main(void) {
    int number,counter=2;
    
    printf("Enter a number: ");
    scanf("%d",&number);
     
    
    while (counter<number) {
        
        if (number % counter == 0) {
            printf("%d is not prime number\n",number);
            break;
        }
        
        if (counter == number-1){
            printf("%d is prime number\n",number);
        }
        
        counter = counter + 1;
    }
    
    return 0;
}
