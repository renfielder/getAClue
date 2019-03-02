

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avatar.h"
#include "item.h"
#include "rooms.h"

extern room* winRoom, *kitchen, *ballroom, *conservatory, *billiard, *library, *study, *atrium, *lounge, *dining, *upStairs;


//if gameOver is 1, the game is over. The game is over when the avatar enters the winRoom
int gameOver=0;

void init_game(){
      Item *atrium_items = item("","",0,item("Chair","why",0,NULL));
      Item *lounge_items = NULL;
      Item *droom_items = NULL;
      Item *kitchen_items = item("","",0,item("Knife","Looks sharp!", 0, item("Ladel", "Looks dull!", 0,NULL)));
      Item *ballroom_items = NULL;
      Item *conser_items = NULL;
      Item *billroom_items = NULL;
      Item *study_items = NULL;
      Item *upStairs_items=NULL;
      atrium = newRoom("Atrium", "What an ostentatious house...", atrium_items, NULL, winRoom, study, lounge,NULL,NULL);
      lounge= newRoom("Lounge", "A fancy room with several lounging couches", lounge_items, dining, NULL, conservatory, atrium,NULL,NULL);
      dining= newRoom("Dining Room", "Every thing is set up, were they planning a party?", droom_items, kitchen, lounge, NULL, NULL,NULL,NULL);
      kitchen= newRoom("Kitchen", "This is where the sausage is made.", kitchen_items, NULL, dining, study, ballroom,NULL,NULL);
      ballroom= newRoom("Balllroom", "You could fit so many bodies in here!", ballroom_items, NULL, NULL, conservatory, kitchen,NULL,NULL);
      conservatory =newRoom("Conservatory", "You can almost taste freedoom! But there are vicious dogs outside.", conser_items, NULL, billiard, lounge, NULL,NULL,NULL);
      billiard= newRoom("Billiard Room", "A place for games, too bad you don't have time", billroom_items, conservatory, library, NULL, study,NULL,NULL);
      study = newRoom("Study", "You could get a lot of work done here.", study_items, library, NULL, kitchen, atrium,NULL,NULL);
      winRoom= newRoom("Win Room","this is where you win",NULL,atrium,NULL, NULL, NULL, NULL, NULL);
      upStairs= newRoom("UpStairs Secret Room", "this is just to satisfy the reqs.",upStairs_items, NULL, NULL, NULL, NULL, NULL, conservatory);
}

void help(){
      printf("Use the command 'look' to see the room you are in.\n");
      printf("Use the command 'look' to see the room you are in.\n");
      printf("Use the command 'go DIRECTION' to go north, south, east, west, up, or down\n");
      printf("Use the command 'take ITEM' to pick up an item in a room.\n");
      printf("Use the command 'use ITEM' to use an item in your inventory.\n");
      printf("Use the command 'drop ITEM' to drop an item from your inventory.\n");
      printf("Use the command 'help' to see this list again.\n");
}


int main(void){
<<<<<<< HEAD
  //  char* input1 = (char*)malloc(sizeof(char*)); //initialize strings for input
	  char* input2 = (char*)malloc(sizeof(char*)); //initialize string for input
=======

>>>>>>> 852700d9daf0cdb50d90380ceabf9556f4272055
    init_game();    //setting up the game
    Avatar *person = avatar("No Name", NULL, NULL, atrium);
    printf("What do you want your name to be?\n");
    scanf("%s", person->name);
    printf("%s", getAvatarName(person));
    printf("\nWelcome to an Adventure!\n");

    printf("You are now in the atrium. Your goal is to free yourself from the house. Explore the house to find the key.\n");
    char* command;
    while(!gameOver){
          printf("What do you want to do now?\n");
          char* input1 = (char*)malloc(sizeof(char*)); //initialize strings for input
          fgets(input1,100,stdin);
          printf("%s\n",input1);
          if(strcmp(input1, "look")==0){
                printf("These are the items in this room.\n");
                Item *curr=lookItems(person->current);
              //  printf("These are the items in this room.\n");
                while(curr!=NULL){
                        printf(" %s ", curr->name);
                        curr=curr->next;  }
            }

           else if(strcmp(input1, "go north")==0){
                 go((person->current)->North, person->current);
                 printf("test");}
                 else if(strcmp(input1, "go south")==0)
                        go(person->current->South, person->current);
                       else if(strcmp(input1, "go east")==0)
                              go(person->current->East, person->current);
                             else if(strcmp(input1, "go west")==0)
                                   go(person->current->West, person->current);
                                   else if(strcmp(input1, "go up")==0)
                                         go(person->current->Up, person->current);
                                         else if(strcmp(input1, "go down")==0)
                                              go(person->current->Down, person->current);
          if(person->current==winRoom)
                gameOver=1;
    }

      printf("You've Won! Your avatar is dead!\n");
return 0;
}

