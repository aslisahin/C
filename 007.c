//
//  main.c
//  007
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//
//Kaynak:https://medium.com/gokhanyavas/c-programlama-örnekleri-5acdb89dfb3d
//
//

//1'den 999'a kadar olan tam sayılar içerisinden basamaklarının küp değeri toplamı kendisine eşit olan c programı.

#include <stdio.h>

int main(void){
    int yuzler=0,onlar=0,birler=0,i,sum=0;
    
    for (i=1; i<999;i++) {
        printf("i:%d\n",i);
        if (i>=100){
            yuzler = i / 100;
            onlar = i % 10;
            birler = (i % 100) / 10;
            
            sum =(yuzler * yuzler * yuzler) + (onlar * onlar * onlar) + (birler * birler * birler);
            
            if (sum == i) {
                printf("%d\n",i);
            }
        }
        
        if (i>=10 && i<100) {
            birler = i / 10;
            onlar = i % 10;
            
            sum = (birler * birler * birler)+(onlar * onlar * onlar);
            
            if (sum == i ){
                printf("%d\n",i);
            }
        }
    
        if (i<10) {
            birler = i;
            
            sum = (birler * birler * birler);
            
            if ( sum == i) {
                printf("%d\n",i);
            }
        }
    }
    
    return 0;
}

