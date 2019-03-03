

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avatar.h"
#include "item.h"
#include "rooms.h"

//if gameOver is 1, the game is over. The game is over when the avatar enters the winRoom
int gameOver=0;

//setting up the game environment; rooms and item. not used. for future reference
/*
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
      conservatory =newRoom("Conservatory", "You can almost taste freedoom! But there are vicious dogs outside.", conser_items, NULL, billiard, lounge, NULL,NULL,upStairs);
      billiard= newRoom("Billiard Room", "A place for games, too bad you don't have time", billroom_items, conservatory, library, NULL, study,NULL,NULL);
      study = newRoom("Study", "You could get a lot of work done here.", study_items, library, NULL, kitchen, atrium,NULL,NULL);
      winRoom= newRoom("Win Room","this is where you win",NULL,atrium,NULL, NULL, NULL, NULL, NULL);
      upStairs= newRoom("UpStairs Secret Room", "this is just to satisfy the reqs.",upStairs_items, NULL, NULL, NULL, NULL, NULL, conservatory);
      setDirections(atrium, NULL, winRoom, study, lounge,NULL,NULL);
      setDirections( lounge, dining, NULL, conservatory, atrium,NULL,NULL);
      setDirections(dining, kitchen, lounge, NULL, NULL,NULL,NULL);
      setDirections(kitchen, NULL, dining, study, ballroom,NULL,NULL);
      setDirections(ballroom, NULL, NULL, conservatory, kitchen,NULL,NULL);
      setDirections(conservatory, NULL, billiard, lounge, NULL,NULL,upStairs);
      setDirections(billiard, conservatory, library, NULL, study,NULL,NULL);
      setDirections(study, library, NULL, kitchen, atrium,NULL,NULL);
      setDirections(winRoom,atrium,NULL, NULL, NULL, NULL, NULL);
      setDirections(upStairs, NULL, NULL, NULL, NULL, NULL, conservatory);
}
*/

//function to print out all available commands to the user
void help(){
      printf("Use the command 'look' to see the room you are in.\n");
      printf("Use the command 'look' to see the room you are in.\n");
      printf("Use the command 'go DIRECTION' to go north, south, east, west, up, or down\n");
      printf("Use the command 'take ITEM' to pick up an item in a room.\n");
      printf("Use the command 'use ITEM' to use an item in your inventory.\n");
      printf("Use the command 'drop ITEM' to drop an item from your inventory.\n");
      printf("Use the command 'help' to see this list again.\n");
      printf("Use the command 'inventory' to see inventory.\n");
}


int main(void){
//initializing all the items
  Item *atrium_items = item("", "", 0,item("chair","a thing to throw",0,item("flower","it smells good", 0, item("atrium thing", "Looks dull!", 0,NULL))));
  Item *lounge_items = item("", "", 0,item("cigar stub","someone was smoking. Don't they know its bad for health?",0,item("lounging chair","relax", 0,NULL)));
  Item *droom_items = item("","", 0, item("plate","thing to eat on",0,item("Napkin","cleans quite nicely", 0, NULL)));
  Item *kitchen_items = item("","",0,item("Knife","Looks sharp!", 0, item("Ladle", "Looks dull!", 0,NULL)));
  Item *ballroom_items = item("","",0,item("Cinderella","She lost a shoe!", 0, item("Shoe", "Looks shiny, maybe someone lost it!", 0,NULL)));
  Item *conser_items = item("","",0,item("Sun","Looks hot!", 0, item("Heat", "Looks warm!", 0,NULL)));
  Item *billroom_items = item("","",0,item("Pool Ball","You need to use this play", 0, item("keyConservatory", "Need to open the Conservatory", 1,NULL)));
  Item *lib_items = item("","",0,item("book","Too bad you can't read",0,NULL));
  Item *study_items = item("","",0,item("Computer","No more coding...", 0, item("keyKitchen", "Need this for the kitchen", 1,NULL)));
  Item *upStairs_items= item("","",0,item("keyAtrium", "this might unlock something important.", 1, item("Up","Go Down!", 0, item("Stairs", "walk up the stairs", 0,NULL))));

  //extern room* winRoom, *kitchen, *ballroom, *conservatory, *billiard, *library, *study, *atrium, *lounge, *dining, *upStairs;

  //initializing all the rooms
  room* atrium = newRoom("Atrium", "What an ostentatious house...", atrium_items, NULL, NULL, NULL, NULL,NULL,NULL);
  room* lounge= newRoom("Lounge", "A fancy room with several lounging couches", lounge_items, NULL, NULL, NULL,NULL,NULL,NULL);
  room* dining= newRoom("Dining Room", "Every thing is set up, were they planning a party?", droom_items, NULL,NULL, NULL, NULL,NULL,NULL);
  room* kitchen= newRoom("Kitchen", "This is where the sausage is made.", kitchen_items, NULL, NULL, NULL,NULL,NULL,NULL);
  room* ballroom= newRoom("Balllroom", "You could fit so many bodies in here!", ballroom_items, NULL, NULL, NULL, NULL,NULL,NULL);
  room* conservatory =newRoom("Conservatory", "You can almost taste freedoom! But there are vicious dogs outside.", conser_items, NULL, NULL,NULL, NULL,NULL,NULL);
  room* billiard= newRoom("Billiard Room", "A place for games, too bad you don't have time", billroom_items, NULL,NULL,NULL,NULL,NULL,NULL);
  room* library = newRoom("Library", "Nice place to study.", lib_items, NULL,NULL,NULL,NULL,NULL,NULL);
  room* study = newRoom("Study", "You could get a lot of work done here.", study_items, NULL, NULL, NULL,NULL,NULL,NULL);
  room* winRoom= newRoom("Win Room","this is where you win",NULL,NULL,NULL, NULL, NULL, NULL, NULL);
  room* upStairs= newRoom("UpStairs Secret Room", "this is just to satisfy the reqs.",upStairs_items, NULL, NULL, NULL, NULL, NULL, NULL);

  //NSEWUP
  //connecting the rooms together
  setDirections(atrium, NULL, winRoom, study, lounge,NULL,NULL);
  setDirections(lounge, dining, NULL, atrium, conservatory,NULL,NULL);
  setDirections(dining, kitchen, lounge, NULL, NULL,NULL,NULL);
  setDirections(kitchen, NULL, dining, ballroom, study ,NULL,NULL);
  setDirections(ballroom, NULL, NULL, conservatory, kitchen,NULL,NULL);
  setDirections(conservatory, NULL, billiard, lounge, ballroom,upStairs,NULL);
  setDirections(billiard, conservatory, library, NULL, NULL ,NULL,NULL);
  setDirections(library, billiard, study, NULL,NULL,NULL,NULL);
  setDirections(study, library, NULL, kitchen, atrium,NULL,NULL);
  setDirections(winRoom,atrium,NULL, NULL, NULL, NULL, NULL);
  setDirections(upStairs, NULL, NULL, NULL, NULL, NULL, conservatory);
  lock(winRoom);
  lock(conservatory);
  lock(kitchen);

    Avatar *person = avatar("", item("","",0,item("test","its a test", 0, NULL)), atrium);
    printf("What do you want your name to be?\n");
    scanf("%s", person->name);
    printf("\nWecome to Adventure  %s\n", getAvatarName(person));
    printf("You wake up in a hallway in a large house. The door to leave is locked.\n");
    printf("You are now in the atrium. Your goal is to free yourself from the house. Explore the house to find the key.\n");
      char* command = (char*)malloc(60*sizeof(char));

    //gameplay
    while(!gameOver){
          printf("What do you want to do now?\n");
          fgets(command,30,stdin);
          if(strcmp(command, "look\n")==0){
            printf("%s",person->current->description);
            printf("These are the items in the room.\n");
                //Item *curr=lookItems(person->current);
              lookItemsinRoom(person);
            }
        //move avatar to different room depending on command
           else if(strstr(command, "go north\n"))
                 person->current = go((person->current)->North, person->current);
                 else if(strstr(command, "go south\n"))
                       person->current =   go(person->current->South, person->current);
                       else if(strstr(command, "go east\n"))
                             person->current =   go(person->current->East, person->current);
                             else if(strstr(command, "go west\n"))
                                   person->current =  go(person->current->West, person->current);
                                   else if(strstr(command, "go up\n"))
                                          person->current = go(person->current->Up, person->current);
                                         else if(strstr(command, "go down\n"))
                                               person->current = go(person->current->Down, person->current);
           else if(strstr(command, "take")){ //if the command is a prompt to take an item
                  Item* curr = person-> current-> items->next;

		   //check for the item to be taken in the room and add to avatars inventory.
            	  while(curr != NULL){  
                  	if(strstr(command, curr->name)){
                    	curr = take_item(person -> current->items, curr->name);
                    	addItem(curr, person -> inventory);
                    	printf("\nYou have taken %s. \n", curr->name);
                    	break;
                  }
                  curr = curr -> next;
            }
      }
          else if(strstr(command, "drop")){ //if the command is a prompt to drop an item
            Item* curr = person-> inventory->next;
            while(curr != NULL){
            	if(strstr(command, curr->name)){
              		curr = take_item(person ->inventory, curr->name);
              		addItem(curr, person -> current->items);
              		printf("\nyou have dropped %s\n", curr->name);
              		break;
            }
              	curr = curr -> next;
      }
          }
          else if(strstr(command, "use")){ //if the command is a prompt to use an item
            if(strstr(command, "keyAtrium")){
              if(person->current == atrium){
                
              Item* curr = take_item(person ->inventory, "keyAtrium");
              winRoom->locked = 0;
              printf("\nyou have unlocked the door! You can leave!\n");

            }
            	else{
              	printf("\nYou can't use this here!\n");
            }
          }
          else if(strstr(command, "keyKitchen")){
            if(person->current == ballroom||person->current == dining||person->current==study){
            Item* curr = take_item(person ->inventory, "keyKitchen");
            kitchen->locked = 0;
            printf("\nyou have unlocked the Kitchen!\n");
          }
          else{
            printf("\nYou can't use this here!\n");
          }

          }
          else if(strstr(command, "keyConservatory")){
            if(person->current == ballroom||person->current == billiard||person->current==lounge){
            Item* curr = take_item(person ->inventory, "keyConservatory");
            conservatory->locked = 0;
            printf("\nyou have unlocked the Conservatory!\n");
          }
          else{
            printf("\nYou can't use this here!\n");
          }
        }
          else {
              printf("You can't use this!");
            }
            }
          else if (strstr(command, "inventory")){
            getInventory(person);
          }
          else if(strstr(command, "help")){
            help();
          }
        
          //if the avatar has entered the win room, the game has been won
          if(person->current==winRoom){
                gameOver=1;}
    }
	
      printf("You've Won! Your avatar is dead!");
	
      //Freedom cannot be bestowed- it must be achieved.
      command = NULL;
      free(command);
      freeAvatar(person);
      freeRooms(atrium);
      freeRooms(kitchen);
      freeRooms(ballroom);
      freeRooms(billiard);
      freeRooms(conservatory);
      freeRooms(library);
      freeRooms(study);
      freeRooms(lounge);
      freeRooms(dining);

return 0;
}
