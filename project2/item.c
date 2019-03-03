#include "item.h"

//item constructor
Item *item(char* name, char* description, bool equipable, Item* next){
    Item *newItem = NULL;
	   newItem = (Item *) malloc(sizeof(Item));

	// checks that dynamic allocation was completed successfully
	if (newItem == NULL) {
		printf("malloc failed\n");
		exit(EXIT_FAILURE);
  }
//   Item* newItem= (Item*) malloc(sizeof(Item));
  newItem->name=(char*)malloc(60*sizeof(char));
  strcpy(newItem->name, name);
  newItem->description=malloc(120*sizeof(char));
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
    free(item->name);
    free(item->description);
    free(item->next);
    free(item);
}

Item* addItem(Item* newitem, Item* itemslist){
    Item* currList =itemslist;
    if(newitem == NULL){
      return NULL;}
    while(currList->next != NULL){
    currList = currList -> next;}
    currList->next = newitem;
    currList = currList -> next;
    currList -> next = NULL;
    printf("added item: %s", newitem->name);
    return newitem;
  }
