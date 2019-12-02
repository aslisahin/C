//
//  main.c
//  054
//
//  Created by Ayşıl Simge Karacan on 18.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//C How to program

//3.16 (Sales Tax) Sales tax is collected from buyers and remitted to the government. A retailer has to file a monthly sales tax report which lists the sales for the month and the amount of sales tax collected, at both the county and state levels. Develop a program that will input the total collections for a month, calculate the sales tax on the collections, and display the county and state taxes. Assume that states have a 4% sales tax and counties have a 5% sales tax. Here is a sample input/output dialog.(Page137)

#include <stdio.h>

int main(void) {
    float collectedAmount;
    char month;
    
    printf("Enter the total amount collected (-1 to quit): ");
    scanf("%f",&collectedAmount);
    
    
    while (collectedAmount!=-1) {
        
        printf("Enter name of month: ");
        scanf(" %c",&month);
                
        fflush(stdin);

        printf("\nTotal Collections: %.2f\n",collectedAmount);
        
        
        float sales = collectedAmount / 1.09 ;
        
        printf("Sales: %.2f\n",sales);
        
        float countyTax = sales*0.05;
        float stateTax = sales*0.04;
        
        printf("County Sales Tax: %.2f\n",countyTax);
        printf("State Sales Tax: %.2f\n",stateTax);
        printf("Total Sales Tax Collected: %.2f",countyTax+stateTax);
        
        
        
        printf("\nEnter the total amount collected (-1 to quit): ");
        scanf("%f",&collectedAmount);
        

        
    }
    
    return 0;
}
