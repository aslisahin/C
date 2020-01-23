//
//  main.c
//  109
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

//Write a C program to copy all elements from an array to another array.

#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int size,i;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    printf("Enter the elements: \n");
    
    for (i=0; i<size; i++) {
        scanf("%d",&arr1[i]);
    }
    
    for (i=0; i<size; i++) {
        arr2[i] = arr1[i];
    }
    
    printf("\nElements of the first array: \n");
    
    for (i=0; i<size; i++) {
        printf("%2d",arr1[i]);
    }

    
    printf("\nElements of the second array: \n");
    
    for (i=0; i<size; i++) {
        printf("%2d",arr2[i]);
    }

    
    return 0;
}
