//
//  main.c
//  106
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

//Write a C program to find second largest element in an array.

#include <stdio.h>

int main() {
    int size,i,max,secondLargest=0;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("Enter the elements of the array: ");
    
    for (i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    max = arr[0];
    
    for (i=0; i<size; i++) {
        if (max<arr[i]) {
            secondLargest = max;
            max = arr[i];
        } else if (secondLargest<arr[i]) {
            secondLargest = arr[i];
        }
    }
    
    printf("Second largest number is %d\n",secondLargest);
    
    
    return 0;
}
