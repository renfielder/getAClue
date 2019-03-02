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
<<<<<<< HEAD

=======
>>>>>>> a328a29dda166a2dce314dbe024daf3bf05ad15c
char* getAvatarName(Avatar* person);
Item* getInventory(Avatar* person);
<<<<<<< HEAD

=======
char* getInventoryItemDescription(Avatar* person, char* variable);
char* lookRoomDescription(room* current);
>>>>>>> a328a29dda166a2dce314dbe024daf3bf05ad15c

char* lookDescription(room* current);

void lookItems(room* current);

<<<<<<< HEAD
room* getCurrent(room* current);
=======
Item* lookItemsinRoom(room* current);

char* lookItemsinRoomDescription(room* current);
>>>>>>> a328a29dda166a2dce314dbe024daf3bf05ad15c

#endif
