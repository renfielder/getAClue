#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"
#include "rooms.h"
#include "avatar.h"



Avatar* avatar(char* name, Item* inventory, Item* hat, room* current){
  Avatar* newAvatar;
  newAvatar = (struct Avatar*) malloc(sizeof(struct Avatar));
  newAvatar->name=malloc(sizeof(name));
  strcpy(newAvatar->name, name);
  newAvatar -> inventory = inventory;
  newAvatar -> hat = hat;
  newAvatar->current = current
  return newAvatar;
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














