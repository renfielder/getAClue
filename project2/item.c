#include "item.h"

//item constructor
Item *item(char* name, char* description, bool equipable, Item* next){
  Item* newItem= (Item*) malloc(sizeof(Item));
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
}

char* item_description( Item* item){
  return item->description;
}

/*we don't actually use this. Was supposed to be a fun feature, but it has now
turned into a laborious task*/
bool item_equipable(Item *item){
  return item->equipable;
}

Item* item_next(Item* item){
  return item->next;
}

Item* take_item(Item* items, char* str){
  Item* prev = items;
  Item* curr = items->next;
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

Item* addItem(Item* newitem, Item* itemslist){
    if(newitem == NULL)
      return NULL;
    newitem.next=itemslist;
    return newitem;
}
