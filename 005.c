//
//  main.c
//  005
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//
//
//Kaynak:https://medium.com/gokhanyavas/c-programlama-örnekleri-5acdb89dfb3d
//
//

//Dışarıdan girilen 3 sayının en büyüğünü bulan c programı.

#include <stdio.h>

int main(void) {
    int sayi1,sayi2,sayi3;
    
    printf("3 sayi girin: \n");
    scanf("%d \n %d \n %d",&sayi1,&sayi2,&sayi3);
    
    if (sayi1>sayi2 && sayi1>sayi3) {
        printf("en buyuk sayi: %d\n",sayi1);
    } else if (sayi2>sayi3 && sayi2>sayi1){
        printf("en buyuk sayi: %d\n",sayi2);
    } else if (sayi3>sayi2 && sayi3>sayi1){
        printf("en buyuk sayi: %d\n",sayi3);
    }
    
    return 0;
}

