#ifndef ROOMS_H
#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#define YES 1
#define NO 0
#define ROOMS_H

typedef struct room{
  char *name;
  char *description;
  struct Item *items;
  struct room *North;
  struct room *South;
  struct room *East;
  struct room *West;
  struct room *Up;
  struct room *Down;
  int locked;
} room;


//function prototype declarations
room* newRoom(char* name, char* description, Item* items, room *north, room *south, room *east, room *west,room *up, room *down);
room* go(room* direction, room* current);
void lock(room* tbl);

#endif
