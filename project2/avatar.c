#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"
#include "rooms.h"



Avatar* avatar(char* name, Item* inventory, Item* hat){
  Avatar* newAvatar;
  newAvatar = (struct Avatar*) malloc(sizeof(struct Avatar));
  newAvatar->name=malloc(sizeof(name));
  strcpy(newAvatar->name, name);
  newAvatar -> inventory = inventory;
  newAvatar -> hat = hat;
  return newAvatar;
}

char* getAvatarName(Avatar* person){
  return person->name;}

Item* getInventory(Avatar* person){
  return person->inventory;
}

Item* getHat(Avatar* person){
  return person->hat;}

//get current room
room* getCurrent(room* current){

return current;
}



//look at the description of the room. list of items in the room
char* lookDescription(room* current){

return current -> description;

}

Item* lookItems(room* current){

return current -> items;

}
