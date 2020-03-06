//
// main.c
// washingMachine
//
//  Introduction to Programming Project
//  Washing Machine
//


#include <stdio.h>
#include <stdlib.h> //system("cls") or system("clear")
#include <string.h> //strcpy()
#include <unistd.h> //sleep()
#include <time.h> //time_t , time(), difftime()


//FUNCTIONS

void mainMenu(void);
void programmesMenu(void);
void setTemprature(void);
void setReccommended(void);
void confirmationScreen(void);
void finalScreen(void);
void cleanTerminal(void);

//VARIABLES

char programme;
int temprature, setTime;
char pickedProgramme[20] = {0};


//MAIN FUNCTION

int main(void) {
    
    cleanTerminal();
    
    mainMenu();
   
    return 0;
}

void cleanTerminal() { //This app is cross-platform. It can be run on unix and windows based machines.
#if _WIN32 || _WIN64
    system("cls");
#else
    system("clear");
#endif
}


void mainMenu() { //ON or OFF the washing machine
    
    
    
    char onOff[3];
    
    system("color 06");
    
    printf("************************||===========||***********************\n");
    printf("\t\t\t   Main Menu   \t\t\n");
    printf("************************||===========||***********************\n\n");
    
    printf("==============================================================\n");
    printf("\t\t\t[ON]\t\t[OFF]\n");
    printf("==============================================================\n");
    
    printf("Enter ON for turning on the machine, OFF to exit: ");
    scanf("%s", onOff);
    
    

    
    
    if (onOff[0] == 'O' && onOff[1] == 'N' && onOff[2] == '\0') {
        //When user enters ON, Programmes Menu will show up
        
        system("color 04");
        printf("\n======================Proceeding...========================\n");
        sleep(1);
        programmesMenu();
    } else if (onOff[0] == 'O' && onOff[1] == 'F' && onOff[2] == 'F') {
        //exit when user pressed OFF
        
        system("color 04");
        printf("\n======================Exitting...==========================\n");
        sleep(1);
        exit(0);
    } else {
        //User entered wrong string. Starting again.
        system("color 04");
        
        printf("\n===================Try to enter again!=====================\n");
        sleep(1);
        mainMenu();
    }
    
    

}

void programmesMenu() { //Showing the program types to take a choice
    
    system("color 02");
    
    cleanTerminal();
    printf("==============================================================\n");
    printf("\t\t\t--- Programmes Menu ---\t\t\n");
    printf("==============================================================\n\n");
    
    system("color 01");
    
    printf("\t\t---------------------------------\n");
    printf("\t\t|\t[S]Sportswear \t\t|\n" );
    printf("\t\t|\t[C]Cottons    \t\t|\n" );
    printf("\t\t|\t[E]Easy Care  \t\t|\n" );
    printf("\t\t|\t[M]Mixed Load \t\t|\n" );
    printf("\t\t|\t[D]Dark Wash  \t\t|\n" );
    printf("\t\t"  "---------------------------------"  "\n");
    
    system("color 02");
    
    
        printf("Pick one of the Programmes\n\n");
        scanf(" %c",&programme);
        
        if (programme != 'S' && programme != 'C' && programme != 'E' && programme != 'M' && programme != 'D') {
            
            system("color 04");
            
            printf("You entered wrong character.\n\tTry Again!\n");
            sleep(1);
            programmesMenu();
        } else {
            setTemprature();
        }
    
}

//Funtion setReccommended(): If user enters -1 it is setting variables to reccommended values.

void setReccommended() { //if user enters -1 set variables to reccommended values
    switch (programme) {
        case 'S':
            if (temprature == -1) {
                temprature = 30;
            }
            if (setTime == -1) {
                setTime = 40;
            }
            break;
                   
            case 'C':
               if (temprature == -1) {
                   temprature = 30;
               }
               if (setTime == -1) {
                   setTime = 30;
               }
                break;
                   
            case 'E':
                if (temprature == -1) {
                    temprature = 40;
                }
                if (setTime == -1) {
                    setTime = 50;
                }
                break;
                
            case 'M':
                if (temprature == -1) {
                    temprature = 60;
                }
                if (setTime == -1) {
                    setTime = 90;
                }
                break;
                   
            case 'D':
                if (temprature == -1) {
                    temprature = 30;
                }
                if (setTime == -1) {
                    setTime = 40;
                }
                break;
                
                default:
                    break;
            
    }
    
}

    
void setTemprature() { //Screen for choosing temprature and time
    
    cleanTerminal();
    
    system("color 02");
    printf("************************************************************\n");
    printf("\t\t\tSet Temprature and Time\t\t\n");
    printf("************************************************************\n\n");
    
    
       switch (programme) { //Showing recommended values for each programme.
            case 'S':
                printf("*\t\tSportswear\t\t*\n");
                printf("Recommended Temprature: 30\n");
                printf("Recommended Time: 40min\n\n");
               strcpy(pickedProgramme, "Sportswear");
                break;
               
            case 'C':
               printf("*\t\tCottons\t\t*\n");
               printf("Recommended Temprature: 30\n");
               printf("Recommended Time: 30min\n\n");
               strcpy(pickedProgramme, "Cottons");
               break;
               
            case 'E':
               printf("*\t\tEasy Care\t\t*\n");
               printf("Recommended Temprature: 40\n");
               printf("Recommended Time: 50min\n\n");
               strcpy(pickedProgramme, "Easy Care");
               break;
            
            case 'M':
               printf("*\t\tMixed Load\t\t*\n");
               printf("Recommended Temprature: 60\n");
               printf("Recommended Time: 90min\n\n");
               strcpy(pickedProgramme, "Mixed Load");
               break;
               
            case 'D':
               printf("***\t\tDark Wash\t\t***\n");
               printf("Recommended Temprature: 30\n");
               printf("Recommended Time: 40min\n\n");
               strcpy(pickedProgramme, "Dark Wash");
               break;
            
                
            default:
                break;
        }
    
    printf("* Choose Temprature and Time(If you enter -1 reccommended values are taken.) *\n\n");
    
    printf("Enter the temprature (between 30 and 60): ");
    scanf("%d",&temprature);
    
    printf("Enter the time (in minutes between 30 to 120): ");
    scanf("%d",&setTime);
    
    if ((temprature<30 && temprature != -1) || temprature>60) {
        system("color 04");
        printf("Given numbers are not in the scale!\nTry Again!\n");
        setTemprature();
    } else {
        setReccommended();
        confirmationScreen();
    }
    

}

void confirmationScreen() { //Check If the user wants to proceed
    
    
    cleanTerminal();
    system("color 09");
    
    char check;
    int choice;
    
    printf("************************************************************\n");
    printf("\t\t\tINFORMATION\t\t\t\n");
    printf("************************************************************\n\n");
    
    printf("\tProgramme you have chosen: %s\n",pickedProgramme);
    printf("\tTemprature: %d\n",temprature);
    printf("\tTime: %d min\n", setTime);
    
    printf("************************************************************\n");
    printf("\t\tDo you want to proceed? [Y] or [N] \t\t\n");
    printf("************************************************************\n\n");
    
    check = getchar();
    
    switch (check) {
        case 'Y':
            printf("Proceeding to the next screen...\n");
            sleep(1);
            finalScreen();
            break;
        case 'N':
            printf("[1] Go back and choose Programme again.\n");
            printf("[2] Go back and choose Temprature and Time again.\n");
            printf("[3] Off the machine and exit.\n");
            printf("[4] Go back.\n");
            
            printf("Your pick: ");
            scanf("%d",&choice);
            
            
            if (choice == 1) {
                printf("Going back the Pick Programme Page.\n");
                sleep(1);
                programmesMenu();
            } else if (choice == 2) {
                printf("Going back to Set Temprature and Time Menu. \n");
                sleep(1);
                setTemprature();
            } else if (choice == 3) {
                printf("Exitting...\n");
                sleep(1);
                exit(0);
            } else if (choice == 4){
                printf("Going back..\n");
                sleep(1);
                confirmationScreen();
            }else {
                printf("Your choice is wrong. Try again.\n");
                confirmationScreen();
            }
            
        default:
            confirmationScreen();
            break;
    }
    
}

void finalScreen(){
    
    cleanTerminal();
    
    system("color 06");
    
    
    time_t startingTime, endingTime;
    double timeDifference;
    
    int count=0,i;
    
    time(&startingTime);
    

    printf("************************************************************\n");
    printf("\t\tMachine is working... \t\t\n");
    printf("************************************************************\n\n");
    
    
    printf("\tProgramme you have chosen: %s\n",pickedProgramme);
    printf("\tTemprature: %d\n",temprature);
    printf("\tTime: %d min\n", setTime);
    
    printf("\nThe starting time -> %s\n",ctime(&startingTime));
    
    printf("Waiting for %d minutes\n\n",setTime);
    
    system("color 04");
    
    printf("\tIN PROGRESS\n");
    
    system("color 02");
    
    //Progress Bar
    for (i = 1; i<=setTime; i += 1) {
        count++;
        printf( "\b\b\b=%d%%" ,count*100/setTime);
        fflush(stdout);
        sleep(1); //Multiply by 60 if you want to convert it into minutes

    }
    system("color 06");
    

    time(&endingTime);
    
    
    printf("\nThe ending time -> %s",ctime(&startingTime));
    

    timeDifference = difftime(endingTime, startingTime); //takes the time difference

    printf( "Execution time = %.2f minutes\n" , timeDifference);
    
    sleep(5);
    exit(0);
    
}


