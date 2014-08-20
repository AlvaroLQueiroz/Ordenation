#include "../include/bubble_sort_improved.h"

#define V 1
#define F 0

void bubble_sort_improved(int *group, int amount){

	int changed = V;
	int amountl = amount - 1, 
				guard = amount,
				counter,
				aux;

	while(changed){
		counter = 0;
		changed = F;

		while(counter < amountl){
			if(group[counter] > group[counter + 1]){
				aux = group[counter];
				group[counter] = group[counter + 1];
				group[counter + 1] = aux;
				changed = V;
				guard = counter;
			}
			counter++;
		}
		amountl = guard;
	}
}

