# Free Me
A simple text adventure with a wonderful surpise at the end!

## What does it do? 
Free Me is a text adventure game where the person is trying to find their way out of the house. They start in the atrium and have to find their way through a treacherous maze...

First you start virtual machine and make the program. Our adventure program has four modules for the avatar(player), items, rooms and the main(adventure). The avatar module is for the helper methods for person playing and the room they are currently in. The items module has helper methods for our list of items and modifying them. The rooms module are for the helper methods regarding rooms and modifying them.

In adventure we have a function for help directions for when a person is unsure of what commands to use in their game.

In the main function we initialize all objects in the rooms and all the rooms themselves. We set all their directions to null because we needed to actually create the rooms before we set them as other directions. We set the directions for the position of the rooms relative to one another. We then lock the rooms that require keys which we created in put in the list of items for certain rooms. 

We created our avatar and printed out statements to start the game and asked for input, which we allocate space for each input. We have a while loop checking if game Over is not true. Within our loop we are checking to see if they are giving us directions for go, take, drop, use, inventory, or help. 

When they get the key to unlock the atrium it alters room from locked to unlocked and allows the avatar to enter the win room which is just outside and they get a special message. 

We then free all things to start the game again!
