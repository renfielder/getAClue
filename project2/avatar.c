#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include "items.h"
#include "rooms.h"

typedef struct Avatar{
  char* name;
  Item* inventory;
  Item* hat;
};

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









