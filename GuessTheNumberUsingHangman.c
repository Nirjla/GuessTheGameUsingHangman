 #include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n, num, guess, hangman_stage=0;
    srand(time(NULL));
    
    printf("Enter the maximum number for guessing: ");
    scanf("%d", &n);
    num = rand() % n + 1;// +1 means probalility of generating number betwwen 1 and n

    do {
        printf("Please enter your guessed number: ");
        scanf("%d", &guess);

        if(guess > num) {
            printf("Sorry, your number is greater than the actual number.\n");
        }
        else if(guess < num) {
            printf("Sorry, your number is less than the actual number.\n");
        }

        // Increment the hangman stage
        hangman_stage++;
        switch(hangman_stage) {
            case 1:
                printf("  ____\n");
                printf(" |    |\n");
                printf(" |\n");
                printf(" |\n");
                printf(" |\n");
                printf("_|_\n");
                break;
            case 2:
                printf("  ____\n");
                printf(" |    |\n");
                printf(" |    O\n");
                printf(" |\n");
                printf(" |\n");
                printf("_|_\n");
                break;
            case 3:
                printf("  ____\n");
                printf(" |    |\n");
                printf(" |    O\n");
                printf(" |    |\n");
                printf(" |\n");
                printf("_|_\n");
                break;
            case 4:
                printf("  ____\n");
                printf(" |    |\n");
                printf(" |    O\n");
                printf(" |   /|\n");
                printf(" |\n");
                printf("_|_\n");
                break;
            case 5:
                printf("  ____\n");
                printf(" |    |\n");
                printf(" |    O\n");
                printf(" |   /|\\\n");
                printf(" |    |\n");
                printf("_|_\n");
                break;
            case 6:
                printf("  ____\n");
                printf(" |    |\n");
                printf(" |    O\n");
                printf(" |   /|\\\n");
                printf(" |    |\n");
                printf("_|_  /\n");
                break;
            case 7:
                printf("  ____\n");
                printf(" |    |\n");
                printf(" |    O\n");
                printf(" |   /|\\\n");
                printf(" |    |\n");
                printf("_|_  / \\\n");
                if(hangman_stage == 7) {
                	printf("\nSorry, you could not guess the number. The actual number was %d\n", num);
                    break;
                }
                
        }
    } while(guess != num && hangman_stage < 7);
  if(guess == num)
  {
  	printf("Congratualtion!!You have won your game....");
  }
    return 0;
}

