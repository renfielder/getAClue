#include "rooms.h"
#include <string.h>

//variables
//the 8 rooms
room* kitchen, ballroom, conservatory, billiard, library, study, atrium, lounge, dining, upStairs, winRoom;

//function to create a new room
room* newRoom(char* name, char* description, Item* items, room* north, room* south,
                     room* east, room* west,room* up, room* down){

  room *newRoom=(room*)malloc(sizeof( room));
  newRoom->name=malloc(sizeof(name));
  strcpy(newRoom->name, name);
  newRoom->description=malloc(sizeof(description));
  strcpy(newRoom->description, description);
  newRoom->items=items;
  newRoom->North=north;
  newRoom->South=south;
  newRoom->East=east;
  newRoom->West=west;
  newRoom->Up=up;
  newRoom->Down=down;
  newRoom->locked = NO;
  return newRoom;
}


//function to exit current room to room in specified direction
room* go(room* direction, room* current){
  room* newRoom = current;
  if(direction != NULL){
    newRoom=direction;
    return newRoom;
  }
  else printf("There is nothing here!");
  return newRoom;
}

//locks the room. Not that useful but fun to have
void lock(room* tbl){
  tbl->locked=YES;
}

//free rooms
/*
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
}*/
