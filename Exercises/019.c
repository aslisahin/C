//
//  main.c
//  019
//
//  Created by Ayşıl Simge Karacan on 10.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//019-Write a program that inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers.

#include <stdio.h>

int main(void) {
    int number1,number2,number3,sum,average,product;
    
    printf("numbers: ");
    scanf("%d%d%d",&number1,&number2,&number3);
    
    sum = number1 + number2 + number3;
    average = sum / 3;
    product = number1 * number2 * number3;
    
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",average);
    printf("Product is %d\n",product);
    
    if (number1<number2 && number3<number1) {
      
            printf("Smallest: %d\n",number3);
            printf("Largest: %d\n",number2);
    
    }
    
    if (number2<number1 && number3<number2) {
        
            printf("Smallest: %d",number3);
            printf("Largest: %d",number1);
        
    }
    
    if (number2<number3 && number1<number2) {
             printf("Smallest: %d\n",number1);
             printf("Largest: %d\n",number3);
        
    }
    
    if (number3<number2 && number1<number3) {

            printf("Smallest: %d\n",number1);
            printf("Largest: %d\n",number2);
        
    }
    

    
    if (number3<number1 && number2<number3) {

            printf("Smallest: %d\n",number2);
            printf("Largest: %d\n",number1);
    }
    
    if (number1<number3 && number2<number1) {

            printf("Smallest: %d\n",number2);
            printf("Largest: %d\n",number3);
    }
    
    return 0;
}
