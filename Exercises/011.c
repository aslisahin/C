//
//  main.c
//  011
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://github.com/gmihran/ProgramlamaTemelleri/tree/master/Algoritmalar
//


//Klavyeden girilen tutarı, KDV(%18) ekleyerek ekrana yazdırınız.

#include <stdio.h>

int main(void) {
    int tutar,toplamTutar;
    
    printf("Tutarı giriniz: ");
    scanf("%d",&tutar);
    
    toplamTutar = (tutar * 0.18) + tutar;
    
    printf("Toplam KDV'li Tutar: %d\n",toplamTutar);
}

