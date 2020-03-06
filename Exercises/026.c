//
//  main.c
//  028
//
//  Created by Ayşıl Simge Karacan on 14.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//https://codeforwin.org/2015/05/c-program-to-convert-celsius-into-fahrenheit.html

//Write a C program to input temperature in Centigrade and convert to Fahrenheit.


#include <stdio.h>

int main(void) {
    float celcius,fahrenheit;
    
    printf("Enter temprature in Celcius : ");
    scanf("%f",&celcius);
    
    fahrenheit = (celcius * 9/5)+32;
    
    printf("Temprature in Fahrenheit: %.2f F\n",fahrenheit);
    
    
    return 0;
}
