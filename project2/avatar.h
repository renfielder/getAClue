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

//function prototype declarations
Avatar* avatar(char* name, Item* inventory, room* current);
char* getAvatarName(Avatar* person);
void getInventory(Avatar* person);
void getInventoryItemDescription(Avatar* person, char* variable);
char* lookRoomDescription(Avatar* person);
void lookItemsinRoom(Avatar* person);
void freeAvatar(Avatar* person);

#endif
