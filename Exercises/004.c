//
//  main.c
//  004
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://medium.com/gokhanyavas/c-programlama-örnekleri-5acdb89dfb3d
//

//Dışarıdan girilen n sayısına kadar olan sayıların karelerinin toplamını hesaplayan program.

#include <stdio.h>

int main(void){

    int n,i,squared=0,sum=0;
    
    printf("n sayisi giriniz: ");
    scanf("%d", &n);
    
    for (i=0; i<=n; i++) {
        squared = i * i;
        sum = sum + squared;
        
    }
    
    printf("n sayisina kadar olan sayilarin toplami: %d\n", sum);
    
    return 0;
}

