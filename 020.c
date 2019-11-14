//
//  main.c
//  020
//
//  Created by Ayşıl Simge Karacan on 13.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//020-Write a program that asks the user to enter the total time elapsed, in seconds, since an event and converts the time to hours, minutes and seconds. The time should be displayed as hours:minutes:seconds. [Hint: Use the remainder operator]

#include <stdio.h>

int main(void) {
    
    int time,seconds=0,minutes=0,hours=0;
    
    printf("Enter the time : ");
    scanf("%d",&time);
    
    
    seconds = time % 60;
    minutes = (time / 60) % 60;
    hours = time / 3600;
    
    printf("%d:%d:%d\n",hours,minutes,seconds);
    
    return 0;
}
