

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
      Item *atrium_items = item("", "", 0,item("chair","a thing to throw",0,item("flower","it smells good", 0, item("atrium thing", "Looks dull!", 0,NULL))));
      Item *lounge_items = item("", "", 0,item("keyAtrium","a thing to unlock",1,item("lounging chair","relax", 0,NULL)));
      Item *droom_items = item("","", 0, item("plate","thing to eat on",0,item("Napkin","cleans quite nicely", 0, NULL)));
      //I need keys
      Item *kitchen_items = item("","",0,item("Knife","Looks sharp!", 0, item("Ladle", "Looks dull!", 0,NULL)));
      Item *ballroom_items = item("","",0,item("Cinderella","She lost a shoe!", 0, item("Shoe", "Looks shiny, maybe someone lost it!", 0,NULL)));
      //I need keys 
      Item *conser_items = item("","",0,item("Sun","Looks hot!", 0, item("Heat", "Looks warm!", 0,NULL)));
      Item *billroom_items = item("","",0,item("Pool Ball","You need to use this play", 0, item("keyConservatory", "Need to open the Conservatory", 1,NULL)));
      Item *study_items = item("","",0,item("Book","Let's Read!", 0, item("keyKitchen", "Need this for the kitchen", 1,NULL)));
      Item *upStairs_items= item("","",0,item("Up","Go Down!", 0, item("Stairs", "walk up the stairs", 0,NULL)));
      atrium = newRoom("Atrium", "What an ostentatious house...", atrium_items, NULL, winRoom, study, lounge,NULL,NULL);
      lounge= newRoom("Lounge", "A fancy room with several lounging couches", lounge_items, dining, NULL, conservatory, atrium,NULL,NULL);
      dining= newRoom("Dining Room", "Every thing is set up, were they planning a party?", droom_items, kitchen, lounge, NULL, NULL,NULL,NULL);
      kitchen= newRoom("Kitchen", "This is where the sausage is made.", kitchen_items, NULL, dining, study, ballroom,NULL,NULL);
      ballroom= newRoom("Balllroom", "You could fit so many bodies in here!", ballroom_items, NULL, NULL, conservatory, kitchen,NULL,NULL);
      conservatory =newRoom("Conservatory", "You can almost taste freedoom! But there are vicious dogs outside.", conser_items, NULL, billiard, lounge, NULL,NULL,NULL);
      billiard= newRoom("Billiard Room", "A place for games, too bad you don't have time", billroom_items, conservatory, library, NULL, study,NULL,NULL);
      study = newRoom("Study", "You could get a lot of work done here.", study_items, library, NULL, kitchen, atrium,NULL,NULL);
      //I need keys
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


      char 
    init_game();    //setting up the game
    Avatar *person = avatar("No Name", NULL, NULL, atrium);
    printf("What do you want your name to be?\n");
    scanf("%s", person->name);
    printf("%s", getAvatarName(person));
    printf("Welcome to an Adventure!\n");

    printf("You are now in the atrium. Your goal is to free yourself from the house. Explore the house to find the key.\n");
      char* command;
          

    while(!gameOver){
          printf("What do you want to do now?");
          scanf("%s", command);
          if(strcmp(command, "look")==0){
                Item *curr=lookItems(person->current);
                printf("These are the items in this room.\n");
                while(curr!=NULL){
                        printf(" %s ", curr->name);
                        curr=curr->next;  }
            }
           else if(strcmp(command, "go north")==0)
                 person->current=go((person->current)->North, person->current);
                 else if(strcmp(command, "go south")==0)
                        person->current=go(person->current->South, person->current);
                       else if(strcmp(command, "go east")==0)
                              person->current=go(person->current->East, person->current);
                             else if(strcmp(command, "go west")==0)
                                   person->current=go(person->current->West, person->current);
                                   else if(strcmp(command, "go up")==0)
                                         person->current=go(person->current->Up, person->current);
                                         else if(strcmp(command, "go down")==0)
                                              person->current=go(person->current->Down, person->current);
           if(strstr(command, "take")){ //if the command is a prompt to take an item
                //parse the string, extract the string to be taken?
                //call take function on item
                  prev = person -> current -> items;
                  curr = person -> current -> items->next;      
            while(curr != NULL){
                  if(strstr(command, curr->name)){
                  prev->next = curr->next;
                  curr->next = NULL;
                  take_item(person -> current, curr->name);
                  }
                  else{
                  prev = curr;
                  curr = curr -> next;
                  }
            }
      }
          if(strstr(command, "drop")){ //if the command is a prompt to drop an item
                //parse the string, extract the string to be dropped?
                //call drop function on item
                  prev = person -> current -> items;
                  curr = person -> current -> items->next;
                
          }
          if(strstr(command, "use")){ //if the command is a prompt to use an item
                //parse the string, extract the string to be used?
                //call use function on item
                  prev = person -> inventory -> items;
                  curr = person -> inventory -> items->next;
                  while(curr != NULL){
                        if(strstr(curr->name, "keyAtrium")){
                              prev->next = curr->next;
                              curr->next = NULL;
                              
                        }
                  }

          }
          if(person->current==winRoom){
                gameOver=1;}
    }

      printf("You've Won! Your avatar is dead!\n");
return 0;
}

