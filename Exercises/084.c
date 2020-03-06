//
//  main.c
//  084
//
//  Created by Ayşıl Simge Karacan on 30.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Creating a user-defined function
//Calculate and print the summation of two integers

#include <stdio.h>

int sumTwoNumbers(int x, int y);

int main(void) {
    int a,b;
    
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    printf("Reslut: %d\n",sumTwoNumbers(a, b));
    
    
    return 0;
}

int sumTwoNumbers(int x, int y){
    return x + y;
}

