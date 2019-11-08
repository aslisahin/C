//
//  main.c
//  013
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://evrak.wordpress.com/2012/01/28/basit-algoritma-ornekleri-1/
//
//


//Bu örnekte küçük bir ücret bordrosu yapmaya çalışacağız. Yani çalışılan gün ile günlük ücret klavyeden girildiğinde aşağıdaki kurallara göre o kişinin eline geçecek net aylık ücreti hesaplayan algoritmayı yapacağız…
//
//Aylık brüt gelir = günlük ücret* çalışılan gün sayısı
//
//Gelir vergisi = aylık brüt gelir * vergi oranı
//
//Net aylık ücret = Aylık brüt gelir – Gelir vergisi
//
//Kurallar:
//
//*çalışılan gün sayısı 31 den fazla olmamalı
//
//*gelir vergisi oranı aylık brüt gelirin % 20 si olarak uygulanmalı. Ancak aylık geliri 5000 den fazla olanlar için % 25 olarak uygulanmalı

#include <stdio.h>

int main(void) {
    int calisilanGun,gunlukUcret,brutGelir=0,vergi=0,netUcret=0;
    
    printf("Çalışılan Gün: ");
    scanf("%d",&calisilanGun);
    
    printf("Günlük Ücret: ");
    scanf("%d",&gunlukUcret);
    
    if (calisilanGun > 31) {
        printf("Çalışılan gün sayısı 31'den fazla olmamalı.");
    } else {
        
        brutGelir = gunlukUcret * calisilanGun;
        
        if (brutGelir <=5000) {
            vergi = brutGelir * 0.2;
            netUcret = brutGelir - vergi;
            printf("Net ücret: %d\n",netUcret);
        } else {
            vergi = brutGelir * 0.25;
            netUcret = brutGelir - vergi;
            printf("Net ücret: %d\n",netUcret);
        }
    }
    return 0;
}

