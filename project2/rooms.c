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

