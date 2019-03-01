#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include <stdbool.h>

typedef struct Item{
  char *name;
  char *description;
  struct Item *next;
};

// constructor
Item *item(char* name, char* description, Item *next);

// getter methods
char *item_name(Item *item);
char *item_description(Item *item);
bool item_equipable(Item *item)
Item *item_next(Item *item);

// retrives an item from an array of Item structs
Item take_item(struct Item* items, char* str);

void item_free(Item *item);
