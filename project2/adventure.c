#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avatar.h"
#include "item.h"
#include "rooms.h"

extern room* current;

void init_game(){
      Item *atrium_items = ();
      Item *lounge_items = ();
      Item *droom_items = ();
      Item *kitchen_items = ("Knife","Looks sharp!", 0, ("Ladel", "Looks dull!", 0, (NULL)));
      Item *ballroom_items = ():
      Item *conser_items = ();
      Item *billroom_items = ();
      Item *study_items = ();
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
     
return 0;
}
