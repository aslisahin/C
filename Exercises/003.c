//
//  main.c
//  003
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//
//
//Kaynak:https://medium.com/gokhanyavas/c-programlama-örnekleri-5acdb89dfb3d
//

//Dışarıdan girilen bir n tam sayısına kadar olan tek tam sayıların toplamını bulan c programı.

#include <stdio.h>

int main(void) {
    
    int n,i,sum=0;
    
    printf("n degeri giriniz:");
    scanf("%d", &n);
    
    for (i=0; i<=n; i++) {
        if ((i % 2) != 0) {
            sum = sum + i ;
        }
    }
    
    printf("tek sayiların toplami: %d\n", sum);
    
    return 0;
}

