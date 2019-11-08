//
//  main.c
//  006
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://medium.com/gokhanyavas/c-programlama-örnekleri-5acdb89dfb3d
//
//

//Çarpma işlemi kullanmadan iki sayının çarpımını bulan c programı

#include <stdio.h>

int main(void){
    
    int number1,number2,sum=0,i;
    
    printf("carpmak istediginiz ilk sayi: ");
    scanf("%d",&number1);
    
    printf("carpmak istediginiz ikinci sayi: ");
    scanf("%d",&number2);
    
    for (i=1;i<=number1;i++){
        sum = sum + number2;
    }
    
    printf("iki sayinin carpimi: %d\n",sum);
    
    return 0;
}

