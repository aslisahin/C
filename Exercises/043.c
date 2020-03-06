//
//  main.c
//  043
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2016/04/c-program-to-find-all-roots-of-quadratic-equation.html

//Write a C program to find all roots of a quadratic equation using if else.

#include <stdio.h>
#include <math.h>

int main(void) {
    float a,b,c,firstRoot,secondRoot; //ax^2 + bx + c = 0
    
    printf("Enter values of a, b, c of quadratic equation (ax^2 + bx + c = 0)");
    scanf("%f%f%f",&a,&b,&c);
    
    float discriminant = (b*b) - (4 * a * c);
    
    if (discriminant>0){
        
        firstRoot = (-b + sqrt(discriminant)) / (2*a);
        secondRoot = (-b - sqrt(discriminant)) / (2*a);
        
        printf("Two distinct and real root exists:\n First Root: %.2f \n Second Root %.2f\n",firstRoot,secondRoot);
        
    } else if (discriminant == 0) {
     
        firstRoot = secondRoot = -b / (2*a);
        
        printf("Two equal and real roots exists:\n First Root: %.2f \n Second Root %.2f\n",firstRoot,secondRoot);
        
    } else if (discriminant<0){
        firstRoot = secondRoot = -b / (2 * a);
        float imaginary = sqrt(-discriminant) / (2*a);
        
        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
        firstRoot, imaginary, secondRoot, imaginary);
    }
    
    return 0;
}
