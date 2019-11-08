//
//  main.c
//  008
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://medium.com/gokhanyavas/c-programlama-örnekleri-5acdb89dfb3d
//
//

// Dışarıdan girilen bir sayının rakamları toplamını bulan c programı

#include <stdio.h>

int main(void){
    int newNumb=0,sum=0,number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number > 0) {
        newNumb = number % 10;
        sum = sum + newNumb;
        number = number / 10;
    }
    printf("SUM: %d\n",sum);
    return 0;
}

