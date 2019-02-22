#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"

typedef struct item{
  char *name;
  char *description;
  struct item *next;
} Item;

// constructor
Item *items(char* name, char* description, Item *next);

// getter methods
char *item_name(Item *item);
char *item_description(Item *item);
Item *item_next(Item *item);

// retrives an item from an array of Item structs
Item take_item(struct Item* items, char* str);

