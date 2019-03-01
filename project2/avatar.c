#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include "item.h"
#include "rooms.h"



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












