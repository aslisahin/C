//
//  main.c
//  017
//
//  Created by Ayşıl Simge Karacan on 10.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//017-Find Every ASCII value in a string

#include <stdio.h>
#include <string.h>

int main(void) {
    //VARIABLES
    int e;
    char name[100]="";
    
    
    printf("Insert a string: ");
    scanf("%99s",name);
    
    size_t len = strlen(name);
    
    
    for (size_t i = 0; i<len; i++) {
        e = name[i];
        printf("ASCII equivalent of the char %c is : %d\n",name[i],e);
    }
    
    
    return 0;
}
