#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avatar.h"
#include "item.h"
#include "rooms.h"
exturn room kitchen, ballroom, conservatory, billiard, library, study, atrium, lounge, dining;


int gameOver;

extern room* current;

void init_game(){
      Item knife = item("Knife","Looks sharp!", 0, NULL);
      Item ladel = item("Ladel", "Looks dull!", 0,NULL);
      Item *atrium_items = (NULL);
      Item *lounge_items = (NULL);
      Item *droom_items = (NULL);
      Item *kitchen_items = (knife(ladel(NULL)));
      Item *ballroom_items = (NULL):
      Item *conser_items = (NULL);
      Item *billroom_items = (NULL);
      Item *study_items = (NULL);
      room atrium("Atrium", "What an ostentatious house...", atrium_items, NULL, *win room*, study, lounge);
      room lounge("Lounge", "A fancy room with several lounging couches", lounge_items, dining, NULL, conservatory, atrium);
      room dining("Dining Room", "Every thing is set up, were they planning a party?", droom_items, kitchen, lounge, NULL, NULL);
      room kitchen("Kitchen", "This is where the sausage is made.", kitchen_items, NULL, dining, study, ballroom);
      room ballroom("Balllroom", "You could fit so many bodies in here!", ballroom_items, NULL, NULL, conservatory, kitchen);
      room conservatory("Conservatory", "You can almost taste freedoom! But there are vicious dogs outside.", conser_items, NULL, billiard, lounge, NULL);
      room billiard("Billiard Room", "A place for games, too bad you don't have time", billroom_items, conservatory, library, NULL, study);
      room study("Study", "You could get a lot of work done here.", study_items, library, NULL, kitchen, atrium);
      room winRoom("Win Room","this is where you win",NULL,atrium,NULL, NULL, NULL, NULL, NULL);
      rooom upStairs("UpStairs Secret Room", "this is just to satisfy the reqs.",upStairs_items, NULL, NULL, NULL, NULL, NULL, conservatory);
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
    char name[20];   //not sure if we need this, ignore for now.
    printf("Welcome to an Adventure!\n");
    printf("What do you want your name to be?\n");
    scanf("%s", &name);
    current=atrium;
    printf("Welcome, %s", name);
    printf("You are now in the atrium. Your goal is to free yourself from the house. Explore the house to find the key.\n");
      char command[30];
    while(!isOver(){         //fix
          printf("What do you want to do now?");
          scanf("%s", &command);
          if(strcmp(command, "look")==0)
                //look in room
           else if(strcmp(command, "go north")==0)
                 go(north);
                 else if(strcmp(command, "go south")==0)
                        go(south);
                       else if(strcmp(command, "go east")==0)
                              go(east);
                             else if(strcmp(command, "go west")==0)
                                   go(west);
                                   else if(strcmp(command, "go up")==0)
                                         go(up);
                                         else if(strcmp(command, "go down")==0)
                                              go(down); 
    }
    scanf("%c", person -> name);
    printf("%c", getAvatarName(person)      
    ));
    init_game();
    //gameOver == entering win room and unlocking it 
    
    if(gameOver){
      printf("You've Won!");
}
return 0;




}
