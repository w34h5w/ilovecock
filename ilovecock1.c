/*
# create unexpected input
# give it to the victim
# if crash, dump registers, else goto start
# 
# # open valid savegame file
# fill last byte with 'a'
# save file
# 
# start game 
# press load game
# load savegame
# 
# wait for crash
# if crashed dump registers
# else close game
# goto start
*/

#include <stdio.h> 

void main(){
	printf("test git ");
	return;
}