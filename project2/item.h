#ifndef ITEM_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define ITEM_H

struct item{
  char *name;
  char *description;
  bool equipable;
  struct item *next;
};
typedef struct item Item;

// constructor
Item *item(char* name, char* description, bool equipable, Item *next);
// getter methods
char *item_name(Item *item);
char *item_description(Item *item);
bool item_equipable(Item *item);
Item *item_next(Item *item);

//adds a specified item to a specified list
Item* addItem(Item* newitem, Item* itemslist);

// retrives an item from an array of Item structs
Item* take_item(Item* items, char* str);
void item_free(Item *item);
#endif
