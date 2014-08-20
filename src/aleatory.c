#include "../include/aleatory.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void generate_numbers(int amount){

	int counter, num;
	FILE *file;

	file = fopen("aleatorys.txt", "r");
	if(!file){
		file = fopen("aleatorys.txt", "wb");
		if(!file){
			printf("Error creating the file aleatorys.txt.\n");
			exit(0);
		}

		srand (time(NULL));

		for(counter = 0; counter < amount; counter++){
			num = rand() % amount;
			fwrite (&num, sizeof(int), 1, file);
		}

		fclose(file);	
	}
	else{
		printf("A random number file already exists.\n");
	}

	

	
}

int *read_numbers(int amount){

	int counter, *group;
	FILE *file;

	file = fopen("aleatorys.txt", "rb");
	if(!file){
		printf("Error reading the file aleatorys.txt.\n");
		exit(0);
	}

	group = (int*) malloc(sizeof(int) * amount);
	if(!group){
		printf("Error when allocating memory for aleatory group.\n");
		exit(0);
	}

	for(counter = 0; counter < amount; counter++){
		fread (&group[counter], sizeof(int), 1, file);
	}

	return group;
}

