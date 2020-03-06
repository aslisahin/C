//
//  main.c
//  110
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

//C program to insert an element in array

#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int size,i,position,element;
    int arr[MAX_SIZE];
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    printf("Enter the elements of the array: ");
    
    for (i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter which position you want to change: ");
    scanf("%d",&position);
    
    printf("Enter new element: ");
    scanf("%d",&element);
    
    for (i=size; i>=position; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[position-1] = element;
    
    printf("New array;\n");
    
    for (i=0; i<size+1; i++) {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
