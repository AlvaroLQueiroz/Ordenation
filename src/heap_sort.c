#include "../include/heap_sort.h"
#include <stdio.h>
#include <stdlib.h>

void heap_sort(int *group, int amount)
{
	int counter = amount/2, dad, son, aux;

	for (;;)
	{
		if (counter > 0){
			counter--;
			aux = group[counter];
		}
		else{
			amount--;
			if (amount == 0)
			return;
			aux = group[amount];
			group[amount] = group[0];
		}

		dad = counter;

		son = counter * 2;

		while (son < amount){
			if ((son + 1 < amount)  &&  (group[son + 1] > group[son])){
				son++;
			}

			if (group[son] > aux){
				group[dad] = group[son];
				dad = son;
				son = dad*2 + 1;
			}
			else{
				break;
			}
		}

		group[dad] = aux;
	}
}

