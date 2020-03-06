//
//  main.c
//  010
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://github.com/gmihran/ProgramlamaTemelleri/tree/master/Algoritmalar
//

// 1 ile 36 arasındaki sayıların köklerini ekrana yazdır.

#include <stdio.h>
#include <math.h>

int main(void) {
    double i,result;
    
    for (i=1; i<36; i++) {
        result=sqrt(i);
        printf("%f\n",result);
    }

}

