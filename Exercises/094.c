//
//  main.c
//  108
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

//Write a C program to count total number of negative elements in an array.

#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int size,i,count=0;
    int arr[MAX_SIZE];
    
    printf("Enter the array size: ");
    scanf("%d",&size);
    
    printf("Enter the elements: ");
    
    for (i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    for (i=0; i<size; i++) {
        if (arr[i]<0) {
            count++;
        }
    }
    
    printf("Total numbers of negative elements: %d\n",count);
    
    return 0;
}
