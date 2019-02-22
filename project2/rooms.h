#include <stdio.h>
#include <stdlib.h>
#include "items.h"
#define YES 1
#define NO 0

struct room{
  char *description;
  struct Item *items;
  struct Room *North;
  struct Room *South;
  struct Room *East;
  struct Room *West;
  struct Room *Up;
  struct Room *Down;
  
};

typedef struct room Room;



