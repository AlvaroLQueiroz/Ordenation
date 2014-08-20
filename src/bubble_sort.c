#include "../include/bubble_sort.h"

void bubble_sort(int *group, int amount){

	int counter, counter2, aux;

	for(counter = 0; counter < amount; counter++){
		for(counter2 = 0; counter2 < amount - 1; counter2++){
			if(group[counter2] > group[counter2 + 1]){
				aux = group[counter2];
				group[counter2] = group[counter2 + 1];
				group[counter2 + 1] = aux;
			}
		}
	}
}

