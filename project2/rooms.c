#include "rooms.h"

  room *newRoom=(struct Room*)malloc(sizeof(struct Room));
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
void room_exit_north(struct Room* current, struct Room* other){
  current->North=other;
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
