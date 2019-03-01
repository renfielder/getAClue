#ifndef ROOMS_H
#define ROOMS_H

#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#define YES 1
#define NO 0


typedef struct {
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
void go(room* other);
void lock(room* tbl);
void printItems(room* tbp);

#endif
