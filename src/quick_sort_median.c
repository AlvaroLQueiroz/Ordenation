#include "../include/quick_sort_median.h"
#include "../include/print.h"
#include <stdio.h>
#include <stdlib.h>

void quick_sort_median(int *group, int begin, int end){

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
		
		pivot = median(group, begin, end);
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

		quick_sort_median(group, begin, counter1 - 1);
		quick_sort_median(group, counter1 + 1, end);
	}
}

int median(int *group, int begin,int end){

	int middle, aux;
	middle = (end - begin) / 2 + begin;

	if(group[middle] < group[begin]){
		aux = group[middle];
		group[middle] = group[begin];
		group[begin] = aux;
	}

	if(group[end] < group[begin]){
		aux = group[end];
		group[end] = group[begin];
		group[begin] = aux;
	}

	if(group[end] < group[middle]){
		aux = group[end];
		group[end] = group[middle];
		group[middle] = aux;
	}

	return middle;
}

