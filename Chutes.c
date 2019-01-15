/* CS 153 PROGRAM ASSIGNMENT #7

Program that makes a chutes and ladders game
for a single user. If the user gets to the end 
of the game they win!

Mark Schuberth 
 
10/29/2018 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* this generates a random number between 1-6 */
int randInt()
{
    return rand() % 6 + 1;
}

int randRoll(int *roll)
{
 *roll = randInt();
}

int main()
{
 srand(time(NULL));
 
 int i, position, roll = 0, count;
 int board [101];
 
 printf("Let's play some Chutes and Ladders!");
 
 while(position <= sizeof(board))
 {
  printf("\nPress 'enter' to roll the dice, good luck!");
  fgetc(stdin);
  randRoll(&roll);
  count++;
  printf("\nYour dice roll was: %d", roll);
  
  /* position stores an increment of dice roll */
  position += roll;
  
  printf("\n  You advance to square: %d", position);
  
  /* switch is used for each position on the board */
  /* corresponding to a position of board[i] */
   switch(position)
   {
    /* ladders: 9 */
    case 1:
     position = 38;
     printf("\nYou hit a ladder! Advance to position 38!\n");
     break;
    case 4:
     position = 14;
     printf("\nYou hit a ladder! Advance to position 14!\n");
     break;
    case 9:
     position = 31;
     printf("\nYou hit a ladder! Advance to position 31!\n");
     break;
    case 28:
     position = 84;
     printf("\nYou hit a ladder! Advance to position 84!\n");
     break;
    case 21:
     position = 42;
     printf("\nYou hit a ladder! Advance to position 42!\n");
     break;
    case 36:
     position = 44;
     printf("\nYou hit a ladder! Advance to position 42!\n");
     break;
    case 51:
     position = 67;
     printf("\nYou hit a ladder! Advance to position 67!\n");
     break;
    case 80:
     position = 100;
     printf("\nYou hit a ladder! Advance to position 100!\n");
     break;
    case 71:
     position = 91;
     printf("\nYou hit a ladder! Advance to position 91!\n");
     break;
    /* chutes: 10 */
    case 16:
     position = 6;
     printf("\nOh no you hit a chute! Go back to position 6!\n");
     break;
    case 49:
     position = 11;
     printf("\nOh no you hit a chute! Go back to position 11!\n");
     break;
    case 47:
     position = 26;
     printf("\nOh no you hit a chute! Go back to position 26!\n");
     break;
    case 62:
     position = 19;
     printf("\nOh no you hit a chute! Go back to position 19!\n");
     break;
    case 87:
     position = 24;
     printf("\nOh no you hit a chute! Go back to position 24!\n");
     break;
    case 64:
     position = 60;
     printf("\nOh no you hit a chute! Go back to position 60!\n");
     break;
    case 56:
     position = 53;
     printf("\nOh no you hit a chute! Go back to position 53!\n");
     break;
    case 93:
     position = 73;
     printf("\nOh no you hit a chute! Go back to position 73!\n");
     break;
    case 95:
     position = 75;
     printf("\nOh no you hit a chute! Go back to position 75!\n");
     break;
    case 98:
     position = 78;
     printf("\nOh no you hit a chute! Go back to position 78!\n");
     break;
   }
   if(position >= 100)
   {
    printf("\nCongratulations you've won!");
    printf("\nYou reached the goal in %d moves!", count);
    exit(EXIT_SUCCESS);
   }
 }
 
 return 0;
}