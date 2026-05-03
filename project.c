#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
void Mode(int choice, int *attempt, int *range, int *timegive)
{
    switch (choice)
    {
    case 1:
        printf("\nYou Have selected the Easy Mode\nNow, Guess the number between 1 to 10\n");
        *attempt = 5, *range = 10, *timegive = 30;
        break;
    case 2:
        printf("\nYou Have selected the Intermediate Mode\nNow, Guess the number between 1 to 100\n");
        *attempt = 7, *range = 100, *timegive = 45;
        break;
    case 3:
        printf("\nYou Have selected the Hard Mode\nNow, Guess the number between 1 to 1000\n");
        *attempt = 10, *range = 1000, *timegive = 60;
        break;
    case 4:
        printf("\nYou Have selected the Expert Mode\nNow, Guess the number between 1 to 10000\n");
        *attempt = 15, *range = 10000, *timegive = 75;
        break;
    default:
        printf("Invalid Choice!!!!\n");
        *attempt = *range = *timegive = 0;
    }
}
int checkSpecial(char *password)
{
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (!isalnum(password[i]))
        {
            // isalnum checks if character is alphanumeric or not
            return 1;
        }
    }
    return 0;
}
// for Hint :--
void hint(int difference)
{
    if (difference >= 1000)
        printf("Long way to Go::!\n");
    else if (difference >= 100)
        printf("Still far\n");
    else if (difference >= 50)
        printf("getting closer\n");
    else if (difference >= 20)
        printf("Very close\n");
    else
        printf("Almost there!\n");
}
void AI()
{
    printf("\nSelect the mode:\n1.Easy Mode\n2.Intermediate Mode\n3.Hard Mode\n4.Expert Mode\n--");
    int choice;
    int num, guess, attempt = 0, range = 0, timegive = 0;
    scanf("%d", &choice);
    Mode(choice, &attempt, &range, &timegive);
    if (range == 0)
    {
        return;
    }
    int compGuess, high = range, low = 1;
    srand(time(0));
    num = rand() % range + 1;
    for (int i = 0; i <= attempt; i++)
    {
        printf("\nGuess the Number:\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("\n%d-->Too High!\n", guess);
            hint(abs(num - compGuess));
        }
        else if (guess < num)
        {
            printf("\n%d-->Too Low!\n", guess);
            hint(abs(num - compGuess));
        }
        else
        {
            printf("\nCongratulations You guessed it \n");
            return;
        }
        int compGuess = (low + high) / 2;
        if (compGuess > num)
        {
            printf("\nAI guess is %d-->Too High!\n", compGuess);
            hint(abs(num - guess));
            high = compGuess - 1;
        }
        else if (compGuess < num)
        {
            printf("\nAI Guess is %d-->Too Low!\n", compGuess);
            hint(abs(num - guess));
            low = compGuess + 1;
        }
        else
        {
            printf("\nAI Won\n");
            return;
        }
    }
    printf("\nOut of Attempts! Correct Number was:%d\n", num);
}
void Survival(const char *username)
{
    printf("\nSelect the mode:\n1.Easy Mode\n2.Intermediate Mode\n3.Hard Mode\n4.Expert Mode\n--");
    int choice;
    scanf("%d", &choice);
    int num, timegive, range = 0, attempt;
    Mode(choice, &attempt, &range, &timegive);
    if (range == 0)
    {
        return;
    }
    num = rand() % range + 1;
    printf("\nPress H to return to main menu\n");
    while (1)
    {
        printf("\nEnter your Guess:\n");
        char a[10];
        scanf("%s", a);
        if (toupper(a[0]) == 'H')
        {
            // toupper function is used to make a character capital like if user pressed 'h' than it will make it 'H'
            printf("\nReturning to main menu.,.,.,...\n");
            return;
        }
        int guess = atoi(a); // atoi converts strings(text)-"42" into integer(number)-42.
        // if user pressed H it will make it zero only reads Numbers not letters
        //  if user types 69mitul than it will stop reading after 69
        if (guess > num)
        {
            printf("\n%d-->Too High!\n", guess);
            hint(abs(num - guess));
        }
        else if (guess < num)
        {
            printf("\n%d-->Too Low!\n", guess);
            hint(abs(num - guess));
        }
        else
        {
            printf("\nCongratulations You guessed it\n");
            return;
        }
    }
    printf("\nThe correct Number was:%d\n", num);
}
void Game()
{
    printf("\nSelect the mode:\n1.Easy Mode\n2.Intermediate Mode\n3.Hard Mode\n4.Expert Mode\n--");
    int choice;
    scanf("%d", &choice);
    int num, guess, attempt = 0, range = 0, timegive = 0;
    srand(time(0));
    Mode(choice, &attempt, &range, &timegive);
    if (range == 0)
    {
        return;
    }
    num = rand() % range + 1;
    while (attempt > 0)
    {
        printf("\nYou have %d Seconds to Guess! :)\nEnter your Guess:\n", timegive);
        time_t strt = time(NULL); // it gives the time in seconds(Since 1 jan 1970)
        int timeout = 0;
        while (1)
        {
            if (_kbhit())
            {
                //_kbhit (keyboard hit) (if we dont use it than we wont go beyond scanf)
                scanf("%d", &guess);
                break;
            }
            if (difftime(time(NULL), strt) >= timegive)
            {
                // difftime gives difference of current time and time start
                timeout = 1;
                break;
            }
            Sleep(1000);
            // it waits for 1 second
        }
        if (timeout)
        {
            attempt--;
            printf("\n\nTimes Up!!\nattemps left:%d\n\n", attempt);
            Beep(1000, 1000); // frequency,duration
            continue;
        }
        if (guess > num)
        {
            attempt--;
            printf("\n%d-->Too High!\nAttempts left:%d\n", guess, attempt);
            hint(abs(num - guess));
        }
        else if (guess < num)
        {
            attempt--;
            printf("\n%d-->Too Low!\nAttempts left:%d\n", guess, attempt);
            hint(abs(num - guess));
            // abs gives the +ve value
            // eg if our num-guess is -ve than it will give positive value of that
        }
        else
        {
            printf("\nCongratulations You guessed it \n");
            return;
        }
    }
    printf("\nOut of attempts! The correct Number was:%d\n", num);
}
void Game2()
{
    char Plyr1[20], Plyr2[20];
    int choice;
    printf("\nEnter Player1 Name:\n");
    scanf("%s", Plyr1);
    printf("\nEnter Player2 Name:\n");
    scanf("%s", Plyr2);
    printf("\nSelect the mode:\n1.Easy Mode\n2.Intermediate Mode\n3.Hard Mode\n4.Expert Mode\n--");
    scanf("%d", &choice);
    int num, guess, attempt = 0, range = 0, timegive = 0;
    srand(time(0));
    Mode(choice, &attempt, &range, &timegive);
    if (range == 0)
    {
        return;
    }
    num = rand() % range + 1;
    int a1 = attempt, a2 = attempt;
    while (a1 > 0 || a2 > 0)
    {
        if (a1 > 0)
        {
            printf("\n%s's Turn \n %d attempts left \nGuess the Number: \n", Plyr1, a1);
            time_t start = time(NULL);
            int timeout = 0;
            while (1)
            {
                if (_kbhit())
                {
                    scanf("%d", &guess);
                    break;
                }
                if (difftime(time(NULL), start) >= timegive)
                {
                    timeout = 1;
                    break;
                }
                Sleep(1000);
            }
            if (timeout)
            {
                printf("\nTime's up! You lost one attempt.\n");
                a1--;
            }
            else if (guess == num)
            {
                printf("\n%s WON! The number was %d\n", Plyr1, num);
                return;
            }
            else if (guess > num)
            {
                printf("\n%d-->Too High!\n", guess);
                hint(abs(num - guess));
                a1--;
            }
            else
            {
                printf("\n%d-->Too Low!\n", guess);
                hint(abs(num - guess));
                a1--;
            }
        }
        if (a2 > 0)
        {
            printf("\n%s's Turn \n%d attempts left \nGuess the Number: \n", Plyr2, a2);
            time_t start = time(NULL);
            int timeout = 0;
            while (1)
            {
                if (_kbhit())
                {
                    scanf("%d", &guess);
                    break;
                }
                if (difftime(time(NULL), start) >= timegive)
                {
                    timeout = 1;
                    break;
                }
                Sleep(1000);
            }
            if (timeout)
            {
                printf("\nTime's up! You lost one attempt.\n");
                a2--;
            }
            else if (guess == num)
            {
                printf("\n%s WON! \nThe number was %d\n", Plyr2, num);
                return;
            }
            else if (guess > num)
            {
                printf("\n%d-->Too High!\n", guess);
                hint(abs(num - guess));
                a2--;
            }
            else
            {
                printf("\n%d-->Too Low!\n", guess);
                hint(abs(num - guess));
                a2--;
            }
        }
    }
    printf("\nBoth players ran out of attempts! The correct number was %d\n", num);
}
int main()
{
    int choice;
    char username[20], fileUser[20];
    char password[20], filePass[20];
    FILE *p;
    while (1)
    {
        printf("\n\t\t\t\t\t_______--------NUMBER-GUESSING-GAME--------_______\n");
        printf("1.Register\n2.Login\n3.Exit\nEnter Choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            // Registration
            while (1)
            {
                printf("Enter new Username:\n");
                scanf("%19s", username);
                int userexist = 0;
                p = fopen("Number.txt", "r");
                if (p != NULL)
                {
                    while (fscanf(p, "%19s %19s", fileUser, filePass) == 2)
                    {
                        if (strcmp(fileUser, username) == 0)
                        {
                            userexist = 1;
                            break;
                        }
                    }
                    fclose(p);
                }
                if (userexist)
                {
                    printf("\nUsername Already existed try new username!!!\n");
                }
                else
                {
                    break;
                }
            }
            while (1)
            {
                printf("\nEnter new Password(should contains atleast one special character):\n");
                scanf("%19s", password);

                if (checkSpecial(password))
                {
                    p = fopen("Number.txt", "a");
                    fprintf(p, "%s\t%s\n", username, password);
                    printf("\nRegistration confirmed\n");
                    fclose(p);
                    break;
                }
                else
                {
                    printf("\nPlease include Special Characacter in your password\n");
                    continue;
                }
            }
        }
        else if (choice == 2)
        {
            // Login
            int found = 0;
            printf("Enter Username: \n");
            scanf("%19s", username);
            printf("Enter Password: \n");
            scanf("%s", password);
            p = fopen("Number.txt", "r");
            if (p == NULL)
            {
                printf("\nNo registered user yet Register first\n");
                continue;
            }
            while (fscanf(p, "%19s %19s", fileUser, filePass) == 2)
            {
                // if fscanf reads both user and pass it will return 2 if one then return 1  if none then return 0
                if (strcmp(fileUser, username) == 0 && strcmp(filePass, password) == 0)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                printf("\nuser found\n");
                while (1)
                {
                    printf("\n1.Single Player\n2. 1v1\n3.Survival Mode\n4.AI V/S Player\n5.Logout\n\nChoose mode:\n");
                    scanf("%d", &choice);
                    if (choice == 1)
                    {
                        Game();
                    }
                    else if (choice == 2)
                    {
                        Game2();
                    }
                    else if (choice == 3)
                    {
                        Survival(username);
                    }
                    else if (choice == 4)
                    {
                        AI();
                    }
                    else if (choice == 5)
                    {
                        printf("\nLogging Out!\n");
                        break;
                    }
                    else
                    {
                        printf("\nInvalid choice!!!!\n");
                    }
                }
            }
            else
            {
                printf("\nUser not Found Register first\n");
            }
            fclose(p);
        }
        else if (choice == 3)
        {
            printf("\nthanks for visiting our program :)\n");
            break;
        }
        else
        {
            printf("\nInvalid choice Please try again!!!\n");
        }
    }
    return 0;
}