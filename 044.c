//
//  main.c
//  044
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link: https://codeforwin.org/2015/05/c-program-to-calculate-gross-salary-of-employee.html

/*
 How to calculate gross salary of an employee using if else in C programming
 
 Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
 Basic Salary <= 10000 : HRA = 20%, DA = 80%
 Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
 Basic Salary >= 20001 : HRA = 30%, DA = 95%
 */

#include <stdio.h>

int main(void) {
    float basicSalary,HRA,DA,grossSalary;
    
    printf("Input basic salary of an employee: ");
    scanf("%f",&basicSalary);
    
    //da = basicSalary * (DA/100)
    
    if (basicSalary<=10000) {
        HRA = basicSalary * 0.2;
        DA = basicSalary * 0.8;
    } else if (basicSalary>10000 && basicSalary<20000) {
        HRA = basicSalary * 0.25;
        DA = basicSalary * 0.9;
    } else{
        HRA = basicSalary * 0.3;
        DA = basicSalary * 0.95;
    }
    
    grossSalary = basicSalary + HRA + DA;
    
    printf("Gross Salary: %.2f",grossSalary);
    
    return 0;
}
