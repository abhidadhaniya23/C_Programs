#include <stdio.h>
#include <string.h>

// this is a multi player game.

int main(void) {
  int number_of_players;
  char names[20];
  printf("Enter number of players (1<players<15): ");
  scanf("%d",&number_of_players);
  
  if(number_of_players<=15 && number_of_players>1){

    for(int i=1; i<=number_of_players;i++){
      printf("Number of players : %d\n",i);
      printf("Enter name of player %d : \n",i);
      scanf("%s",&names[i]);
    }    
  
  }

  else{
    printf("Enter proper number of players...\n");
  }

  char arr[3][10]={"Abhi","Rohan","Harry"};


  for(int i=0; i<3;i++){
    printf("Player %d : %s \t address : %u\n",arr+i,arr+i);
  }

  return 0;
}