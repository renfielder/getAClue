#include "rooms.h"
#include <string.h>

//variables
//the 8 rooms
room* kitchen, ballroom, conservatory, billiard, library, study, atrium, lounge, dining, upStairs, winRoom;

//function to create a new room
room* newRoom(char* name, char* description, Item* items, room* north, room* south,
                     room* east, room* west,room* up, room* down){

  room *newRoom=(room*)malloc(sizeof( room));
  newRoom->name=malloc(60*sizeof(char));
  strcpy(newRoom->name, name);
  newRoom->description=malloc(120*sizeof(char));
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
room* go(room* direction, room* current ){
  if (!direction) {
        printf("You cannot move there.\n");
    } else if (direction->locked) {
        printf("It's locked.\n");
    } else {
        current = direction;
        printf("\nMoving to  %s. \n", current->name);
        return current;

    }
  /*room* newRoom = current;
  if(direction != NULL && direction->locked!=NO){
    newRoom=direction;
    printf("%s", newRoom->name);
    return newRoom;
  }
  else printf("There is nothing here!");
  return newRoom;*/
}

//locks the room. Not that useful but fun to have
void lock(room* tbl){
  tbl->locked=YES;
}
void setDirections(room* newRoom, room* north, room* south, room* east, room* west, room* up, room*down){
  newRoom->North=north;
  newRoom->South=south;
  newRoom->East=east;
  newRoom->West=west;
  newRoom->Up=up;
  newRoom->Down=down;
}
//free rooms

void freeRooms(room* oldRoom){
  if (oldRoom == NULL) {
      return;
  }

  oldRoom->name = NULL;
  oldRoom->description = NULL;
  item_free(oldRoom->items);
  oldRoom->North=NULL;
  oldRoom->South=NULL;
  oldRoom->East=NULL;
  oldRoom->West=NULL;
  oldRoom->Up= NULL;
  oldRoom->Down=NULL;

  free(oldRoom);
}
