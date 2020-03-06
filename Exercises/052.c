//
//  main.c
//  052
//
//  Created by Ayşıl Simge Karacan on 18.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2016/04/c-program-to-find-all-roots-of-quadratic-equation-using-switch.html

//Write a C program to find all roots of a Quadratic equation using switch case.

#include <stdio.h>
#include <math.h>

int main(void) {
    //ax^2 + bx + c = 0
    int a,b,c;
    
    printf("Enter a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    
    //discriminant = b^2 - 4*a*c
    
    float discriminant = b*b - 4*a*c;
    float root1=0,root2=0;
    
    switch (discriminant>0) {
        case 1:
            // -b + root(discriminant) / 2*a
            root1 = -b + sqrt(discriminant) / 2*a;
            root2 = -b - sqrt(discriminant) / 2*a;
            printf("Roots: %.2f %.2f\n",root1,root2);
            break;
        case 0:
            switch (discriminant == 0) {
                case 1:
                    // -b / 2*a
                    root1 = root2 = -b / 2*a;
                    printf("Roots: %.2f and %.2f",root1,root2);
                    break;
                case 0:
                    //root1=root2 = -b/2*a
                    //root + imaginary, root - imaginary
                    root1 = root2 = -b / 2*a;
                    float imaginary = sqrt(-discriminant) / (2*a);
                    printf("Roots: %.2f + i%.2f and %.2f - i%.2f",root1,imaginary,root2,imaginary);
                    break;
            }
            break;
    }
    
    
    return 0;
}
