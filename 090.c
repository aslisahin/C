//
//  main.c
//  104
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

//C program to find sum of array elements

#include <stdio.h>

int main() {
    int size,i,sum=0;
    
    printf("Enter size of the array: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("Enter the elements of the array: ");
    
    for (i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    for (i=0; i<size; i++) {
        sum += arr[i];
    }
    
    printf("Sum of all elements in the array: %d\n",sum);
    
    
    return 0;
}
