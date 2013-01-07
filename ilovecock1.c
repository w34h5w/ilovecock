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

void handle_error( char *error_code ){

	printf("dead: %s \n", error_code );
	return;
}

void main(){

	FILE *pSavegame;

	printf("testing git... \n");
	pSavegame = fopen ( "savegame.txt", "r" );
	if (pSavegame == NULL ) handle_error( "fopen1" );
	printf("file open \n");
	if ( fclose ( pSavegame ) != 0 ) handle_error( "fclose1" );
	printf("file closed \n");
	return;
}
