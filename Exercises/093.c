//
//  main.c
//  107
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

//Write a C program to count total number of even and odd elements in an array.

#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int size,i,odd=0,even=0;
    int arr[MAX_SIZE];
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    printf("Enter the elements of the array: \n");
    
    for (i=0; i<size; i++) {
        scanf("%d",&arr[size]);
    }
    
    for (i=0; i<size; i++) {
        
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        
    }
    
    printf("Number of odd elements: %d\n",odd);
    printf("Number of even elements: %d\n",even);
    
    
    
    return 0;
}
