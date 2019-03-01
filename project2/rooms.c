#include "rooms.h"
#include <string.h>

//variables
room* current;
//the 8 rooms
room kitchen, ballroom, conservatory, billiard, library, study, atrium, lounge, dining;

//function to create a new room
room* newRoom(char* description, Item* items, room* north, room* south, 
                     room* east, room* west,room* up, room* down){

  room *newRoom=(struct room*)malloc(sizeof(struct room));

  newRoom->description=description;
  newRoom->items=items;
  newRoom->North=north;
  newRoom->South=south;
  newRoom->East=east;
  newRoom->West=west;
  newRoom->Up=up;
  newRoom->Down=down;
  
  return newRoom;
}


//function to exit current room to room in specified direction
void go(room* direction){
  if(current->direction != NULL){
    current=direction;
  }
  else printf("There is nothing here!");
}

//locks the room
void lock(room* tbl){
  tbl->locked=YES;
}


//prints the list of items in the room 
void printItems(room* tbp){
  
}

//free rooms
void freeRooms(room* tbf){
  free(kitchen);
  free(ballroom);
  free(billiard);
  free(conservatory);
  free(library);
  free(study);
  free(atrium);
  free(lounge);
  free(dining);
}
