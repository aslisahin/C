//
//  main.c
//  058
//
//  Created by Ayşıl Simge Karacan on 24.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//3.21 (Preincrementing vs Postincrementing) Write a program that demonstrates the difference between preincrementing and postincrementing using the increment operator ++

#include <stdio.h>

int main(void) {
    int number1,pre,post,number2;
    
    number1 = 2;
    number2 = 2;
    
    
    pre = ++number1;
    post = number2++;
    printf("Preincrementing Number: %d\n",pre);
    printf("Postincrementing number: %d\n" ,post);
    
    
    return 0;
}
