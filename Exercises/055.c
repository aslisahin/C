//
//  main.c
//  055
//
//  Created by Ayşıl Simge Karacan on 19.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//3.17 (Mortgage Calculator) Develop a C program to calculate the interest accrued on a bank cus- tomer's mortgage. For each customer, the following facts are available:
//a) the account number
//b) the mortgage amount
//c) the mortgage term
//d) the interest rate
//The program should input each fact, calculate the total interest payable ( = mortgage amount × interest rate × mortgage term), and add it to the mortgage amount to get the total amount payable. It should calculate the required monthly payment by dividing the total amount payable by the number of months in the mortgage term. The program should display the required monthly pay- ment rounded off to the nearest dollar. The program should process each customer's account at a time. Here is a sample input/ output dialog:(Page137)

#include <stdio.h>

int main(void) {
    float accountNumber, mortageAmount, mortageTerm, interestRate;
    
    printf("Enter account number (-1 to end): ");
    scanf("%f",&accountNumber);

    while (accountNumber!=-1) {
        printf("Enter mortage amount (in dollars): ");
        scanf("%f",&mortageAmount);
        
        printf("Enter mortage term (in years): ");
        scanf("%f",&mortageTerm);
        
        printf("Enter interest rate(as a decimal): ");
        scanf("%f",&interestRate);
        
        float interestPayable = mortageAmount * interestRate * mortageTerm;
        float totalAmountPayable = interestPayable + mortageAmount;
        float monthlyPayment = totalAmountPayable / (mortageTerm*12);
        
        printf("The monthly payable interest: $ %.2f\n",monthlyPayment);
        
        printf("Enter account number (-1 to end): ");
        scanf("%f",&accountNumber);
        
    }
    
    
    
    return 0;
}
