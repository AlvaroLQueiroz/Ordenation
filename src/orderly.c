#include "../include/orderly.h"
#include <stdlib.h>
#include <stdio.h>


int *crescent(int amount){

	int counter, *group;

	group = (int*) malloc(sizeof(int) * amount);
	if(!group){
		printf("Error when allocating memory.\n");
		exit(0);
	}

	for(counter = 1; counter <= amount; counter++){
		group[counter - 1] = counter;
	}

	return group;
}

int *decrescent(int amount){


	 int counter, *group;

	group = (int*) malloc(sizeof(int) * amount);
	if(!group){
		printf("Error when allocating memory.\n");
		exit(0);
	}

	for(counter = amount; counter > 0; counter--){
		group[amount - counter] = counter;
	}

	return group;
}

