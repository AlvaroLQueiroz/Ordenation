#include "../include/quick_sort_first.h"
#include "../include/print.h"
#include <stdio.h>
#include <stdlib.h>

void quick_sort_first(int *group, int begin, int end){

	int pivot, counter1, counter2, auxiliary;

	if(end - begin < 2){
		if(end - begin == 1){
			if(group[begin] > group[end]){
				auxiliary = group[begin];
				group[begin] = group[end];
				group[end] = auxiliary;
			}
		}
	}
	else{
		pivot = begin;

		auxiliary = group[pivot];
		group[pivot] = group[end];
		group[end] = auxiliary;
		counter1 = begin;
		counter2 = end - 1;

		while(counter2 >= counter1){
			while(group[counter1] < group[end]){
				counter1++;
			}

			while(group[counter2] > group[end]){
				counter2--;
			}
			if(counter2 >= counter1){
				auxiliary = group[counter1];
				group[counter1] = group[counter2];
				group[counter2] = auxiliary;
				counter1++;
				counter2--;
			}
		}

		auxiliary = group[counter1];
		group[counter1] = group[end];
		group[end] = auxiliary;

		quick_sort_first(group, begin, counter1 - 1);
		quick_sort_first(group, counter1 + 1, end);
	}
}
		
