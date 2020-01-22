//
//  main.c
//  081
//
//  Created by Ayşıl Simge Karacan on 30.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Calculating Sales

#include <stdio.h>

int main(void) {
    int productNumber,quantity;
    float retailPrice=0,total=0;
    
    printf("Enter Product Number: ");
    scanf("%d",&productNumber);
    
    printf("Quantity sold for one day: ");
    
    while (productNumber != -1) {
        
        scanf("%d",&quantity);
        
        switch (productNumber) {
            case 1:
                retailPrice = 2.98;
                total += retailPrice * quantity;
                break;
            case 2:
                retailPrice = 4.50;
                total += retailPrice * quantity;
                break;
            case 3:
                retailPrice = 9.98;
                total += retailPrice * quantity;
                break;
            case 4:
                retailPrice = 4.49;
                total += retailPrice * quantity;
                break;
            case 5:
                retailPrice = 6.87;
                total += retailPrice * quantity;
                break;
                
            default:
                break;
        }
        printf("Enter Product Number: ");
        scanf("%d",&productNumber);
    }
 
    printf("Total retail value of all products sold last week: %.2f\n",total);
    
    
    return 0;
}
