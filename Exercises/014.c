//
//  main.c
//  014
//
//  Created by Ayşıl Simge Karacan on 9.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//
//girilen iki sayının pozitif tam bölenlerini bulma

#include <stdio.h>

int main(void){
    int numb1,numb2,i,j;
    
    printf("Enter two numbers: ");
    scanf("%d\n %d",&numb1,&numb2);
    
    printf("************Number-1*************\n");

    
    for (i=1;i<=numb1;i++) {
        
        if (numb1%i == 0) {
            printf("%d\n",i);
        }
    }
    
    printf("************Number-2*************\n");

    
    for(j=1;j<=numb2;j++) {
        
        if (numb2%j == 0){
            printf("%d\n",j);
        }
    }
    return 0;
}

