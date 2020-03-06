//
//  main.c
//  015
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Girilen iki sayının en büyük ortak bölenini bulma

#include <stdio.h>

int main(void){
    int sayi1,sayi2,i;
    
    printf("enter two numbers: ");
    scanf("%d\n %d",&sayi1,&sayi2);
    
    if (sayi1>sayi2) {
        
        for (i=sayi2;i>0;i--) {
            if (sayi1%i == 0 && sayi2%i == 0) {
                printf("En buyuk ortak bolen: %d\n",i);
                break;
            }
        }
        
    } else if (sayi2>sayi1) {
        
        for (i=sayi1;i>0;i--) {
            if (sayi1%i == 0 && sayi2%i == 0) {
                printf("En buyuk ortak bolen: %d\n",i);
                break;
            }
        }
    } else {
        printf("Sayilar eşit. En buyuk ortak bolen: %d\n",sayi1);
    }
    
    return 0;
}

