#include <stdio.h>
#include <stdlib.h>
#include "items.h"
#include "avatar.h"
#define YES 1
#define NO 0

//function prototype declarations
struct room* newRoom(char* description, Item* items, room *north, room *south, room *east, room *west,room *up, room *down);
void go(room* other);
void lock(room* tbl);
void printItems(room* tbp);


struct room{
  char *description;
  struct Item *items;
  struct room *North;
  struct room *South;
  struct room *East;
  struct room *West;
  struct room *Up;
  struct room *Down;
  int locked=NO;
};

typedef struct room room;



