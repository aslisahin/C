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

//COLORS

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define COLOR_RESET "\x1b[0m"


//MAIN FUNCTION

int main(void) {
    
    cleanTerminal();
    
    mainMenu();
   
    return 0;
}

void cleanTerminal() { //This app is cross-platform. It can be run on unix and windows based machines. (For uncolored version)
#if _WIN32 || _WIN64
    system("cls");
#else
    system("clear");
#endif
}



void mainMenu() { //ON or OFF the washing machine
    
    cleanTerminal();
    
    char onOff[3];
    
    
    printf(YELLOW"************************||===========||***********************"COLOR_RESET"\n");
    printf(CYAN"\t\t\t   Main Menu   \t\t" COLOR_RESET "\n");
    printf(YELLOW"************************||===========||***********************"COLOR_RESET"\n\n");
    
    printf(YELLOW"=============================================================="COLOR_RESET"\n");
    printf("\t\t\t"CYAN"[ON]\t\t[OFF]"COLOR_RESET"\n");
    printf(YELLOW"=============================================================="COLOR_RESET"\n");
    
    printf(CYAN"Enter ON for turning on the machine, OFF to exit: "COLOR_RESET);
    scanf("%s", onOff);

    
    
    if (onOff[0] == 'O' && onOff[1] == 'N' && onOff[2] == '\0') {
        //When user enters ON, Programmes Menu will show up
        printf(RED"\n======================Proceeding...========================\n"COLOR_RESET);
        sleep(1);
        programmesMenu();
    } else if (onOff[0] == 'O' && onOff[1] == 'F' && onOff[2] == 'F') {
        //exit when user pressed OFF
        printf(RED"\n======================Exitting...==========================\n"COLOR_RESET);
        sleep(1);
        exit(0);
    } else {
        //User entered wrong string. Starting again.
        printf(RED"\n===================Try to enter again!=====================\n"COLOR_RESET);
        sleep(1);
        mainMenu();
    }
    
    

}

void programmesMenu() { //Showing the program types to take a choice
    
    cleanTerminal();
    printf(YELLOW"==============================================================\n"COLOR_RESET);
    printf(CYAN"\t\t\t--- Programmes Menu ---\t\t\n"COLOR_RESET);
    printf(YELLOW"==============================================================\n\n"COLOR_RESET);
    
    printf("\t\t" YELLOW "---------------------------------" COLOR_RESET "\n");
    printf(YELLOW"\t\t|\t" GREEN "[S]Sportswear" YELLOW " \t\t|\n" COLOR_RESET);
    printf(YELLOW"\t\t|\t" RED "[C]Cottons"  YELLOW  "    \t\t|\n" COLOR_RESET);
    printf(YELLOW"\t\t|\t" BLUE "[E]Easy Care" YELLOW "  \t\t|\n" COLOR_RESET);
    printf(YELLOW"\t\t|\t" MAGENTA "[M]Mixed Load" YELLOW " \t\t|\n" COLOR_RESET);
    printf(YELLOW"\t\t|\t" CYAN "[D]Dark Wash" YELLOW  "  \t\t|\n" COLOR_RESET);
    printf("\t\t" YELLOW "---------------------------------" COLOR_RESET "\n");
    
    
        printf(CYAN"Pick one of the Programmes\n\n"COLOR_RESET);
        scanf(" %c",&programme);
        
        if (programme != 'S' && programme != 'C' && programme != 'E' && programme != 'M' && programme != 'D') {
            printf(RED"You entered wrong character.\n\tTry Again!\n"COLOR_RESET);
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
    printf(YELLOW"************************************************************\n"COLOR_RESET);
    printf(CYAN"\t\t\tSet Temprature and Time\t\t\n"COLOR_RESET);
    printf(YELLOW"************************************************************\n\n"COLOR_RESET);
    
    
       switch (programme) { //Showing recommended values for each programme.
            case 'S':
                printf(GREEN"*\t\tSportswear\t\t*\n"COLOR_RESET);
                printf(MAGENTA"Recommended Temprature: 30\n"COLOR_RESET);
                printf(MAGENTA"Recommended Time: 40min\n\n"COLOR_RESET);
               strcpy(pickedProgramme, "Sportswear");
                break;
               
            case 'C':
               printf(GREEN"*\t\tCottons\t\t*\n"COLOR_RESET);
               printf(MAGENTA"Recommended Temprature: 30\n"COLOR_RESET);
               printf(MAGENTA"Recommended Time: 30min\n\n"COLOR_RESET);
               strcpy(pickedProgramme, "Cottons");
               break;
               
            case 'E':
               printf(GREEN"*\t\tEasy Care\t\t*\n"COLOR_RESET);
               printf(MAGENTA"Recommended Temprature: 40\n"COLOR_RESET);
               printf(MAGENTA"Recommended Time: 50min\n\n"COLOR_RESET);
               strcpy(pickedProgramme, "Easy Care");
               break;
            
            case 'M':
               printf(GREEN"*\t\tMixed Load\t\t*\n"COLOR_RESET);
               printf(MAGENTA"Recommended Temprature: 60\n"COLOR_RESET);
               printf(MAGENTA"Recommended Time: 90min\n\n"COLOR_RESET);
               strcpy(pickedProgramme, "Mixed Load");
               break;
               
            case 'D':
               printf(GREEN"***\t\tDark Wash\t\t***\n"COLOR_RESET);
               printf(MAGENTA"Recommended Temprature: 30\n"COLOR_RESET);
               printf(MAGENTA"Recommended Time: 40min\n\n"COLOR_RESET);
               strcpy(pickedProgramme, "Dark Wash");
               break;
            
                
            default:
                break;
        }
    
    printf(CYAN"* Choose Temprature and Time(If you enter -1 reccommended values are taken.) *\n\n"COLOR_RESET);
    
    printf(BLUE"Enter the temprature (between 30 and 60): "COLOR_RESET);
    scanf("%d",&temprature);
    
    printf(BLUE"Enter the time (in minutes between 30 to 120): "COLOR_RESET);
    scanf("%d",&setTime);
    
    if ((temprature<30 && temprature != -1) || temprature>60) {
        printf(RED"Given numbers are not in the scale!\nTry Again!\n"COLOR_RESET);
        sleep(1);
        setTemprature();
    } else if((setTime<30 && setTime!=-1) || setTime>120) {
        printf(RED"Given numbers are not in the scale!\nTry Again!\n"COLOR_RESET);
        sleep(1);
        setTemprature();
    } else {
        setReccommended();
        confirmationScreen();
    }
    

}

void confirmationScreen() { //Check If the user wants to proceed
    
    
    cleanTerminal();
    
    char check;
    int choice;
    
    printf(YELLOW"************************************************************\n"COLOR_RESET);
    printf(YELLOW"\t\t\tINFORMATION\t\t\t\n"COLOR_RESET);
    printf(YELLOW"************************************************************\n\n"COLOR_RESET);
    
    printf(CYAN"\tProgramme you have chosen: %s\n"COLOR_RESET,pickedProgramme);
    printf(CYAN"\tTemprature: %d\n"COLOR_RESET,temprature);
    printf(CYAN"\tTime: %d min\n"COLOR_RESET, setTime);
    
    printf(YELLOW"************************************************************\n"COLOR_RESET);
    printf(MAGENTA"\t\tDo you want to proceed? [Y] or [N] \t\t\n"COLOR_RESET);
    printf(YELLOW"************************************************************\n\n"COLOR_RESET);
    
    check = getchar();
    
    switch (check) {
        case 'Y':
            printf(RED"Proceeding to the next screen...\n"COLOR_RESET);
            sleep(1);
            finalScreen();
            break;
        case 'N':
            printf(BLUE"[1] Go back and choose Programme again.\n"COLOR_RESET);
            printf(BLUE"[2] Go back and choose Temprature and Time again.\n"COLOR_RESET);
            printf(BLUE"[3] Off the machine and exit.\n"COLOR_RESET);
            printf(BLUE"[4] Go back.\n"COLOR_RESET);
            
            printf(CYAN"Your pick: "COLOR_RESET);
            scanf("%d",&choice);
            
            
            if (choice == 1) {
                printf(RED"Going back the Pick Programme Page.\n"COLOR_RESET);
                sleep(1);
                programmesMenu();
            } else if (choice == 2) {
                printf(RED"Going back to Set Temprature and Time Menu. \n"COLOR_RESET);
                sleep(1);
                setTemprature();
            } else if (choice == 3) {
                printf(RED"Exitting...\n"COLOR_RESET);
                sleep(1);
                exit(0);
            } else if (choice == 4){
                printf(RED"Going back..\n"COLOR_RESET);
                sleep(1);
                confirmationScreen();
            }else {
                printf(RED"Your choice is wrong. Try again.\n"COLOR_RESET);
                sleep(1);
                confirmationScreen();
            }
            
        default:
            confirmationScreen();
            break;
    }
    
}

void finalScreen(){
    
    cleanTerminal();
    
    
    time_t startingTime, endingTime;
    double timeDifference;
    
    int count=0,i;
    
    time(&startingTime);
    

    printf(YELLOW"************************************************************\n"COLOR_RESET);
    printf(CYAN"\t\tMachine is working... \t\t\n"COLOR_RESET);
    printf(YELLOW"************************************************************\n\n"COLOR_RESET);
    
    
    printf(CYAN"\tProgramme you have chosen: %s\n"COLOR_RESET,pickedProgramme);
    printf(CYAN"\tTemprature: %d\n"COLOR_RESET,temprature);
    printf(CYAN"\tTime: %d min\n"COLOR_RESET, setTime);
    
    printf(BLUE"\nThe starting time -> %s\n"COLOR_RESET,ctime(&startingTime));
    
    printf(MAGENTA"Waiting for %d minutes\n\n"COLOR_RESET,setTime);
    
    printf(RED"\tIN PROGRESS\n"COLOR_RESET);
    
    //Progress Bar
    for (i = 1; i<=setTime; i += 1) {
        count++;
        printf(GREEN "\b\b\b=%d%%" COLOR_RESET,count*100/setTime);
        fflush(stdout);
        sleep(1); //Multiply by 60 if you want to convert it into minutes

    }
    

    time(&endingTime);
    
    
    printf(BLUE"\nThe ending time -> %s"COLOR_RESET,ctime(&startingTime));
    

    timeDifference = difftime(endingTime, startingTime); //takes the time difference

    printf(RED "Execution time = %.2f minutes\n" COLOR_RESET, timeDifference);
    
    sleep(5);
    exit(0);
    
}
