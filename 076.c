//
//  main.c
//  076
//
//  Created by Ayşıl Simge Karacan on 2.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

// Write an algorithm and the resulting C program to check whether a given number is an Armstrong number
/*
 rakam sayısının toplamı üsler olacak (count diyelim)
 her sayının üssünün (count) toplamı sayıya eşitse armstrong sayı
 örnek; 153 = 1^3 + 5^3 + 3^3
*/

#include <stdio.h>
#include <math.h>


int main(void) {
    int number,count=0,lastDigit,sum=0,counter,oldNumber;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    counter = number;
    oldNumber = number;
    
    while (counter != 0) {
        counter /= 10;
        count++;
    }
    
    while (number!=0) {
        lastDigit = number % 10;
        number /= 10;
        sum += pow(lastDigit, count);
    }
    
    
    if (sum == oldNumber) {
        printf("%d is an Armstrong Number\n",oldNumber);
    } else {
        printf("%d is not an Armstrong Number\n",oldNumber);
    }
    

    return 0;
}



