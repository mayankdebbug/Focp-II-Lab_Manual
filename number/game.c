#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
    void Mode(int choice, int *attempt, int *range, int *timegive){
        switch (choice){
            case 1: printf("<------------------You Have selected the Easy Mode [RANGE : 1 TO 10 || ATTEMPTS : 5]------------------>\n");
                *attempt = 5,*range = 10,*timegive = 30;     break;
            case 2: printf("<------------------You Have Selected The Intermediate Mode [RANGE : 1 TO 100 || ATTEMPTS : 7]------------------>\n");
                *attempt = 7,*range = 100,*timegive = 45;    break;
            case 3: printf("<------------------You Have Selected The Hard Mode [RANGE : 1 TO 1000 || ATTEMPTS : 10]------------------>\n");
                *attempt = 10,*range = 1000,*timegive = 60;  break;
            case 4: printf("<------------------You Have Selected The Expert Mode [RANGE : 1 TO 10000 || ATTEMPTS : 15]------------------>\n");
                *attempt = 15,*range = 10000,*timegive = 75; break;
            default: printf("<------------------Invalid Choice!!!!------------------>\n");
                *attempt = *range = *timegive = 0;
            }
        }
    int checkSpecial(char *password){
        for(int i = 0;password[i] != '\0';i++){
            if(!isalnum(password[i])) return 1;
        }
        return 0;
    }
    void hint(int difference){
        if(difference >= 1000)     printf("------------------>Long way to Go!\n");
        else if(difference >= 100) printf("------------------>Still Far!\n");
        else if(difference >= 50)  printf("------------------>Getting Closer!\n");
        else if(difference >= 20)  printf("------------------>Very Close!\n");
        else if(difference >= 10)  printf("------------------>Extremely Close!\n");
        else if(difference >= 5)   printf("------------------>Almost There!\n");
        else                       printf("------------------>Just A Step Away!\n");
    }
    int checkGuess(int guess, int num){
    if(guess > num){
        printf("\n[YOUR GUESS --> %d] --> Too High!\n", guess);
        hint(abs(num - guess));
        return 0;
    }
    if(guess < num){
        printf("\n[YOUR GUESS --> %d] --> Too Low!\n", guess);
        hint(abs(num - guess));
        return 0;
    }
    printf("\n<------------------Correct Guess!------------------>\n");
    return 1;
}
int timedInput(int *guess, int timegive){
    time_t start = time(NULL);
    while(1){
        if(_kbhit()){
            scanf("%d", guess);
            return 1;
        }
        if(difftime(time(NULL), start) >= timegive)
            return 0;
        Sleep(1000);
    }
}
    void BOT(){
        printf("<============================================================>\n");
        printf("1.Easy Mode\n2.Intermediate Mode\n3.Hard Mode\n4.Expert Mode");
        printf("\n<============================================================>\n");
        printf("Select the mode --> ");
        int choice;
        int  num, guess,attempt=0,range=0,timegive=0;
        scanf("%d",&choice);
        Mode(choice, &attempt, &range, &timegive);
        if(range == 0) return;
        int BotAttempt = attempt , PlayerAttempt = attempt;
        int high = range,low = 1;
        num = rand() % range + 1;
        while(BotAttempt > 0 || PlayerAttempt > 0){
          if(PlayerAttempt > 0){
            printf("Guess the Number --> \n");
            scanf("%d",&guess);
             if(checkGuess(guess, num) == 1) return;
             printf("TIME : %d SEC || ATTEMPTS : %d",timegive,PlayerAttempt);
            PlayerAttempt--;
            }
          if(BotAttempt > 0 && low <= high){
            int BotGuess = (low+high)/2;
            if(BotGuess>num){
                printf("\n[BOT ATTEMPTS : %d || BOT GUESS --> %d] -->Too High!\n",BotAttempt,BotGuess);
                hint(abs(num-BotGuess));
                BotAttempt--;
                high = BotGuess-1;
            }else if(BotGuess<num){
                printf("\n[BOT ATTEMPTS : %d || BOT GUESS --> %d] -->Too Low!\n",BotAttempt,BotGuess);
                hint(abs(num-BotGuess));
                BotAttempt--;
                low = BotGuess+1;
            }else{
                printf("\n[BOT Guess --> %d]\nBOT Won\n",BotGuess);
                return;
            }
        }
    }
         printf("\nOut Of Attempts! Correct Number Was --> %d\n",num);
}
    void Survival(){
        printf("<============================================================>\n");
        printf("1.Easy Mode\n2.Intermediate Mode\n3.Hard Mode\n4.Expert Mode");
        printf("\n<============================================================>\n");
        printf("Select the mode --> ");
        int choice;
        scanf("%d",&choice);
        int num , timegive , range=0 , attempt;
        Mode(choice, &attempt, &range, &timegive);
        if(range == 0) return;
        num = rand() % range + 1;
        while(1){
            printf("\nEnter your Guess(H To Return To Main Menu) --> \n");
            char a[10];
            scanf("%s", a);
            if(toupper(a[0]) == 'H') return;
            int  guess = atoi(a);
            if(checkGuess(guess, num) == 1) return;
        }
        printf("You Lose! The Correct Number Was --> %d\n",num);
}
    void Game() {
        printf("<============================================================>\n");
        printf("1.Easy Mode\n2.Intermediate Mode\n3.Hard Mode\n4.Expert Mode");
        printf("\n<============================================================>\n");
        printf("Select the mode --> ");
        int choice;
        scanf("%d",&choice);
        int num, guess,attempt=0,range=0,timegive=0;
        Mode(choice, &attempt, &range, &timegive);
        if(range == 0){
            return;
        }
        num = rand() % range + 1;
        while(attempt>0){
        printf("\n[TIME : %d SEC || ATTEMPT : %d]\nEnter Your Guess --> ",timegive,attempt);
        if(!timedInput(&guess, timegive)){
            printf("\n<------------------Time's Up!------------------>\n");
            attempt--;
            continue;
        }
        if(checkGuess(guess, num) == 1) return;
        attempt--;
    }
    printf("\nOut Of Attempts! [Correct Number --> %d]\n",num);
}
    void Game2(){
        char Plyr1[20],Plyr2[20];
        int choice;
        printf("Enter Player 1 Name --> ");
        scanf("%s",Plyr1);
        printf("Enter Player 2 Name --> ");
        scanf("%s",Plyr2);
        printf("<============================================================>\n");
        printf("1.Easy Mode\n2.Intermediate Mode\n3.Hard Mode\n4.Expert Mode");
        printf("\n<============================================================>\n");
        printf("Select the mode --> ");
        scanf("%d",&choice);
        int num, guess,attempt=0,range=0,timegive=0;
        Mode(choice, &attempt, &range, &timegive);
        if(range == 0) return;
        num = rand() % range + 1;
        int a1 = attempt,a2=attempt;
        while(a1>0 || a2>0){
        if(a1>0){
            printf("\n%s's Turn\n[TIME : %d SEC || ATTEMPTS : %d]\nGuess The Number --> ",Plyr1,timegive,a1);
            if(timedInput(&guess, timegive) && checkGuess(guess, num) == 1){
                printf("\nWinner --> %s\n", Plyr1); return;
            }
            a1--;
        }
            if(a2>0){
                printf("\n%s's Turn \n[TIME : %d SEC || ATTEMPTS : %d]\nGuess The Number --> ",Plyr2,timegive,a2);
                if(timedInput(&guess, timegive) && checkGuess(guess, num) == 1){
                printf("\nWinner --> %s\n", Plyr2); return;
            }
            a2--;
        }
    }
    printf("\n<------------------[Match Result : DRAW] || [Correct Number Was %d]------------------>\n", num);
}
    int main(){
        srand(time(0));
        int choice;
        char username[20],fileUser[20];
        char password[20], filePass[20];
        FILE *p;
    while(1){
        printf("<------------------------------------------------------------------------------------------------------------------------------------->\n");
        printf("\n\t\t\t\t<============================================================>\n");
        printf("\t\t\t\t\t\t\tNUMBER GUESSING GAME\n");
        printf("\t\t\t\t<============================================================>\n");
        printf(" 1. Register\n");
        printf(" 2. Login\n");
        printf(" 3. Exit\n");
        printf("<------------------------------------------------------------------------------------------------------------------------------------->\n");
        printf("Enter your choice --> ");
        scanf("%d",&choice);
        if (choice == 1){ //Registration
        while(1){
            printf("Enter New Username --> ");
            scanf("%19s",username);
            int userexist = 0;
            p = fopen("Number.txt", "r");
            if(p != NULL){
            while (fscanf(p, "%19s %19s", fileUser, filePass) == 2) {
            if (strcmp(fileUser, username) == 0) {
                userexist = 1;
                break;
            }
        }
        fclose(p);
    }
        if(userexist) printf("<------------------Username Already Exist!!!------------------>\n");
        else          break;
    }
    while(1){
            printf("Enter New Password[Should Contains AtLeast One Special Character] --> ");
            scanf("%19s",password);
        if(checkSpecial(password)){
            p =  fopen("Number.txt","a");
            fprintf(p,"%s\t%s\n",username,password);
            printf("\n<-----------------Registration Confirmed------------------>\n");
            fclose(p);
            break;
        }else{
            printf("<------------------Please Include Special Characacter In Your Password------------------>\n");
            continue;
    }
}
        }else if(choice == 2){ //Login
            int found = 0;
            printf("Enter Username: ");
            scanf("%19s", username);
            printf("Enter Password: ");
            scanf("%s", password);
            p = fopen("Number.txt","r");
            if(p == NULL){
            printf("\n------------------>No Registered User Found!! Register first<------------------\n");
            continue;
        }
            while (fscanf(p,"%19s %19s",fileUser,filePass)==2){ // if fscanf reads both user and pass it will return 2 if one then return 1  if none then return 0
            if(strcmp(fileUser,username) == 0 && strcmp(filePass,password) == 0){
                found = 1;
                break;
            }
        }
        if(found){
            printf("User Found\n");
            while(1){
            printf("==============================================================\n");
            printf("1.Single Player MODE[WITH TIMER]\n2.1v1 MODE[WITH TIMER]\n3.Survival MODE\n4.BOT V/S Player MODE\n5.Logout\n");
            printf("==============================================================\n");
            printf("CHOOSE MODE: ");
            scanf("%d",&choice);
            if      (choice == 1) Game();
            else if (choice == 2) Game2();
            else if (choice == 3) Survival();
            else if (choice == 4) BOT();
            else if (choice == 5){
                printf("\n<-------------------------------------------------------------Logging Out!------------------------------------------------------------->\n\n\n");
                break;
            }else printf("<-------------------Invalid Choice!!!!------------------->\n");
        }
        }else printf("User Not Found Register First !!!!!\n");
        fclose(p);
    }else if(choice == 3){
        printf("\n<---------------------------------------------------Thanks For Visiting Our Program <3 ------------------------------------------------>\n");
        printf("<-------------------------------------------------------------------------------------------------------------------------------------->");
        break;
    }else{
        printf("\n--------------->Invalid Choice Please Try Again!!!<-----------------\n");
       }
    }
   return 0;
}