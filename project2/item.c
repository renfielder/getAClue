#include "item.h"

Item *item(char* name, char* description, bool equipable, struct Item* next){
  struct Item* newItem= (struct Item*) malloc(sizeof(struct Item));
  newItem->name=malloc(sizeof(name));
  strcpy(newItem->name, name);
  newItem->description=malloc(sizeof(description));
  strcpy(newItem->description, description);
  (*newItem).equipable = equipable;
  (*newItem).next = next;
  return newItem;
}

char* item_name(Item* item){
  return (*item).name;
  //item->name
}
char* item_description( Item* item){
  return item->description;
}

bool item_equipable(Item *item){
  return item->equipable;
}

Item* item_next(Item* item){
  return item->next;
}

Item take_item(Item* items, char* str){
  struct Item* prev = items;
  struct Item* curr = items->next;
  while (curr != NULL){
    if (strcmp(curr->name,str) == 0){
      prev->next = curr-> next;
      curr->next = NULL;
      return curr;
    }
    else{
      prev = curr;
      curr=curr->next;
    }
  }
  return NULL;
}

void item_free(Item *item) {

    if (item == NULL) {
        return;
    }

    item->name = NULL;
    item->description = NULL;
    item->equipable = NULL;
    item->next = NULL;

    free(item);
}
