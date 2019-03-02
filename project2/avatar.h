#ifndef AVATAR_H
#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "item.h"
#define YES 1
#define NO 0
#define AVATAR_H

typedef struct avatar{
  char* name;
  Item* inventory;
  room* current;
}Avatar;

Avatar* avatar(char* name, Item* inventory, room* current);

char* getAvatarName(Avatar* person);

Item* getInventory(Avatar* person);


char* lookDescription(room* current);

void lookItems(room* current);

room* getCurrent(room* current);

#endif
