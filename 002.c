//
//  main.c
//  002
//
//  Created by Ayşıl Simge Karacan on 8.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//
//Kaynak:https://medium.com/gokhanyavas/c-programlama-örnekleri-5acdb89dfb3d
//
//

//2.Yarıçapı dışarıdan girilen bir dairenin çevresini ve alanını bulan c programı

#include <stdio.h>

int main (void) {
    float area,perimeter,radius,pi=3.14;
    
    printf("Yaricap girin: ");
    scanf("%f", &radius);
    
    //area = pi.radius^2
    area = pi * radius * radius;
    
    //perimeter = 2.pi.radius
    perimeter = 2 * pi * radius;
    
    printf("Alani: %f\n", area);
    printf("Cevresi: %f\n", perimeter);
    
    return 0;
}

