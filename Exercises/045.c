//
//  main.c
//  045
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/05/c-program-to-check-profit-or-loss.html

//Write a C program to input cost price and selling price of a product and check profit or loss. 

#include <stdio.h>

int main(void) {
    int costPrice,sellingPrice,profit;
    
    printf("Cost Price: ");
    scanf("%d",&costPrice);
    
    printf("Selling Price: ");
    scanf("%d",&sellingPrice);
    
    profit = sellingPrice - costPrice;
    
    if (profit>0) {
        printf("Profit: %d\n",profit);
    } else if (profit<0) {
        printf("Loss: %d\n",profit);
    } else {
        printf("No profit and loss\n");
    }
    
    return 0;
}
