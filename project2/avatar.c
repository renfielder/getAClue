#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"
#include "rooms.h"
#include "avatar.h"



Avatar* avatar(char* name, Item* inventory, room* current){
  Avatar* newAvatar;
  newAvatar = (Avatar*) malloc(sizeof(Avatar));
  newAvatar->name=malloc(60*sizeof(char));
  strcpy(newAvatar->name, name);
  newAvatar -> inventory = inventory;
  newAvatar->current = current;
  return newAvatar;
}

char* getAvatarName(Avatar* person){
  return person->name;}

Item* getInventory(Avatar* person){
  return person->inventory;
}


char* getInventoryItemDescription(Avatar* person, char* variable){
Item* prev = person -> inventory;
Item* curr = person -> inventory -> next;
while(curr != NULL){
  if(strcmp(curr -> name, variable) == 0){
    prev->next = curr->next;
    curr->next = NULL;
    return curr->description;
  }
  else{
    prev = curr;
    curr = curr -> next;

  }
}
return NULL;
}





//look at the description of the room. list of items in the room
char* lookRoomDescription(Avatar* person){

return person -> current -> description;

}

void lookItems(room* current){
  Item* item1 = current->items;
  while(item1->next != NULL){
    printf(item1->name);
    item1 = item1->next;
  }}

char* lookItemsinRoomDescription(Avatar* person){

  Item* prev = person -> current;
  Item* curr = person -> current -> next;
while(curr != NULL){
  if(strcmp(curr -> name, variable) == 0){
    prev->next = curr->next;
    curr->next = NULL;
    return curr->description;
  }
  else{
    prev = curr;
    curr = curr -> next;

  }
}
return NULL;
}
}