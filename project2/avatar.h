#include <stdio.h>
#include <stdlib.h> 
#include "rooms.h"
#include "items.h"

typedef struct Avatar{
  char* name;
  Item* inventory;
  Item* hat;
};

char* getAvatarName(Avatar* person);

Item* getInventory(Avatar* person);

Item* getHat(Avatar* person);