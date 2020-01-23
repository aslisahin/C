//
//  main.c
//  105
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

//Write a program to find maximum and minimum element in array

#include <stdio.h>

int main() {
    int size,i,maxNumber,minNumber;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("Enter the elements of the array: ");
    
    for (i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    maxNumber = arr[0];
    minNumber = arr[0];
    
    for (i=0; i<size; i++) {
        
        if (maxNumber<arr[i]) {
            maxNumber = arr[i];
        }
        
        if (minNumber>arr[i]) {
            minNumber = arr[i];
        }
    }
    
    printf("Max number: %d\n",maxNumber);
    printf("Min Number: %d\n",minNumber);
    
    return 0;
}
