//
//  main.c
//  001
//
//  Created by Ayşıl Simge Karacan on 8.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//
//
//Kaynak:https://medium.com/gokhanyavas/c-programlama-örnekleri-5acdb89dfb3d
//

// 1.Dışarıdan girilen n sayısına kadar olan sayıların toplamını veren c programı.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n,i,sum=0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        sum = sum + i;
    }
    
    printf("n'e kadar olan sayilarin toplami: %d\n" ,sum);

    
    return 0;
}

