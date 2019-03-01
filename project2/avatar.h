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
}Avatar;

char* getAvatarName(Avatar* person);

Item* getInventory(Avatar* person);

char* getInventoryItemDescription(Avatar* person, char* variable);

char* lookDescription(room* current);

Item* lookItems(room* current);



Room* getCurrent(room* current);

char* lookRoomDescription(room* current);

Item* lookItemsinRoom(room* current);

char* lookItemsinRoomDescription(room* current);

