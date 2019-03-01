#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include "item.h"
#include "rooms.h"

extern room* current;


Avatar* avatar(char* name, Item* inventory, Item* hat){
  Avatar* avatar; 
  avatar = (struct Avatar*) malloc(sizeof(struct Avatar));
  avatar -> name = name;
  avatar -> inventory = inventory;
  avatar -> hat = hat; 
  return avatar;
}

char* getAvatarName(Avatar* person){
  return person->name;}

Item* getInventory(Avatar* person){
  
  return person->inventory;
}

char* getInventoryItemDescription(Avatar* person, char* variable){

return item -> description;
}



//get current room 
room* getCurrent(room* current){

return current;
}


//look at the description of the room. list of items in the room
char* lookRoomDescription(room* current){

return current -> description;
 
}

Item* lookItemsinRoom(room* current){

return current -> items;

}

char* lookItemsinRoomDescription(room* current){

  return current -> items -> description;
}













