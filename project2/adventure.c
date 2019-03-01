#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avatar.h"
#include "item.h"
#include "rooms.h"
exturn room kitchen, ballroom, conservatory, billiard, library, study, atrium, lounge, dining;

NSEW
void init_game(){
      Item knife = item("Knife","Looks sharp!", 0, NULL);
      Item ladel = item("Ladel", "Looks dull!", 0,NULL);
      Item *atrium_items = (NULL);
      Item *lounge_items = (NULL);
      Item *droom_items = (NULL);
      Item *kitchen_items = (knife(ladel(NULL)));
      Item *ballroom_items = (NULL):
      Item *conser_items = (NULL);
      Item *billroom_items = (NULL);
      Item *study_items = (NULL);
      room atrium("Atrium", "What an ostentatious house...", atrium_items, NULL, *win room*, study, lounge);
      room lounge("Lounge", "A fancy room with several lounging couches", lounge_items, dining, NULL, conservatory, atrium);
      room dining("Dining Room", "Every thing is set up, were they planning a party?", droom_items, kitchen, lounge, NULL, NULL);
      room kitchen("Kitchen", "This is where the sausage is made.", kitchen_items, NULL, dining, study, ballroom);
      room ballroom("Balllroom", "You could fit so many bodies in here!", ballroom_items, NULL, NULL, conservatory, kitchen);
      room conservatory("Conservatory", "You can almost taste freedoom! But there are vicious dogs outside.", conser_items, NULL, billiard, lounge, NULL);
      room billiard("Billiard Room", "A place for games, too bad you don't have time", billroom_items, conservatory, library, NULL, study);
      room study("Study", "You could get a lot of work done here.", study_items, library, NULL, kitchen, atrium);
}

int main(void){

    printf("Welcome to an Adventure!\n");
    printf("What do you want your name to be?\n");
    scanf("")
    return 0;
}
