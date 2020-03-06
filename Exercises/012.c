//
//  main.c
//  012
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://github.com/gmihran/ProgramlamaTemelleri/tree/master/Algoritmalar
//


//Bir ürünün alış fiyatı, vergi oranı ve kar oranına göre satış fiyatını hesaplatıp ekrana yazdırınız.(kar ve vergi ör: %20 ise kullanıcı 20 girecek)

#include <stdio.h>

int main(void) {
    int ilkFiyat,vergi,kar,sonFiyat,karliFiyat;
    
    printf("Alis fiyati: ");
    scanf("%d",&ilkFiyat);
    
    printf("Vergi Oranı: ");
    scanf("%d",&vergi);
    
    printf("Kar oranı: ");
    scanf("%d",&kar);
    
    karliFiyat = ilkFiyat + (ilkFiyat * kar/100);
    sonFiyat = karliFiyat + (karliFiyat * vergi/100);
    
    printf("Satış Fiyatı:%d\n", sonFiyat);
    
}

