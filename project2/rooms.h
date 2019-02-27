#include <stdio.h>
#include <stdlib.h>
#include "items.h"
#define YES 1
#define NO 0

//function prototype declarations
struct Room* newRoom(char* description, Item* items, room *north, room *south, room *east, room *west,room *up, room *down);
void go(room* other);
void lock(room* tbl);

struct room{
  char *description;
  struct Item *items;
  struct Room *North;
  struct Room *South;
  struct Room *East;
  struct Room *West;
  struct Room *Up;
  struct Room *Down;
  int locked=NO;
  
};

typedef struct room Room;



