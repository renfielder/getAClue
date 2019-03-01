#include <stdio.h>
#include <stdlib.h> 
#include "rooms.h"
#include "items.h"
#define YES 1
#define NO 0 

typedef struct Avatar{
  char* name;
  Item* inventory;
  Item* hat;
};

Avatar* avatar(char* name, Item* inventory, Item* hat);

char* getAvatarName(Avatar* person);

Item* getInventory(Avatar* person);

Item* getHat(Avatar* person);

typedef struct Avatar{
  char* name;
  Item* inventory;
  Item* hat;
};

char* getAvatarName(Avatar* person);

Item* getInventory(Avatar* person);

Item* getHat(Avatar* person);

char* lookDescription(room* current);

Item* lookItems(room* current);

Room* getCurrent(room* current);

char* lookItemsDescription(room* current);