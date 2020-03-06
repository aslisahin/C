//
//  main.c
//  009
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://github.com/gmihran/ProgramlamaTemelleri/tree/master/Algoritmalar
//

//11-1 arasındaki tek sayıları ekrana yazdır

#include <stdio.h>

int main(void) {
    int i;
    
    for (i=1;i<=11;i++){
        if ((i % 2) != 0) {
            printf("%d\n",i);
        }
    }
}

