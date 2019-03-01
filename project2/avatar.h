#ifndef AVATAR_H
#define AVATAR_H

#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "item.h"
#define YES 1
#define NO 0

typedef struct {
  char* name;
  Item* inventory;
  Item* hat;
  room* current;
}Avatar;

Avatar* avatar(char* name, Item* inventory, Item* hat, room* current);

char* getAvatarName(Avatar* person);

Item* getInventory(Avatar* person);

Item* getHat(Avatar* person);

char* lookDescription(room* current);

Item* lookItems(room* current);

room* getCurrent(room* current);

#endif
