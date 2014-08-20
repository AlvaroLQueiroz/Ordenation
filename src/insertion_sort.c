#include <stdio.h>
#include "../include/insertion_sort.h"

void insertion_sort(int  *group, int amount){

	int counter, counter2, aux, value;

	for(counter = 1; counter < amount; counter++){
		aux = group[counter];
		value = group[counter];
		counter2 = counter - 1;

		while(counter2 != -1 && value < group[counter2]){
			group[counter2 + 1] = group[counter2];
			--counter2;
		}

		group[counter2 + 1] = aux;
	}

}

