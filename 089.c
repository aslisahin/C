//
//  main.c
//  103
//
//  Created by Ayşıl Simge Karacan on 9.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

// C program to print all negative elements in array

#include <stdio.h>

int main() {
    int size,i;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("Enter elements in array: ");
    
    for (i = 0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("\nNegative elements in the array: \n");
    
    for (i=0; i<size; i++) {
        if (arr[i]<0) {
            printf("\t%d\n",arr[i]);
        }
    }
    
    return 0;
}
