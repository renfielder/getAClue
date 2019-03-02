#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"
#include "rooms.h"
#include "avatar.h"


//avatar constructor
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

void getInventory(Avatar* person){
  Item* curr = person-> inventory ->items;
  while (curr != NULL){
    printf("%s \n", curr -> name);
    curr=curr->next;
}

//get description of item in inventory of avatar
void getInventoryItemDescription(Avatar* person, char* variable){
Item* curr = person -> inventory -> items;
while(curr != NULL){
  if(strstr(curr -> name, variable)){
    printf("%s \n", curr->description);
    break;
  }
    curr = curr -> next;

  }
}

//print out the description of current room
char* lookRoomDescription(Avatar* person){
  printf("%s\n", person->current->description);
  return person -> current -> description;
}




//return list of items in current room
void lookItemsinRoom(Avatar* person){
  Item* curr = person->current ->items;
  while (curr != NULL){
    printf("%s \n", curr -> name);
    curr=curr->next;
  }
}

void freeAvatar(Avatar* person){
  if (person == NULL) {
      return;
  }
  person->name = NULL;
  person->inventory = NULL;
  person->current = NULL;
  free(person);
}

/*char* lookItemsinRoomDescription(Avatar* person){
  Item* prev = person ->current->items;
  Item* curr = prev -> next;
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
}*/
