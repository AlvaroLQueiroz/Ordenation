#include "../include/merge_sort.h"
#include <stdio.h>
#include <stdlib.h>

void merge_sort(int *group, int amount) {
	int mid;
	if (amount > 1) {
		mid = amount / 2;
		merge_sort(group, mid);
		merge_sort(group + mid, amount - mid);
		merge(group, amount);
	}
}

void merge(int *group, int amount) {
	int mid;
	int i, j, k;
	int *tmp;

	tmp = (int*) malloc(amount * sizeof(int));
		if (tmp == NULL) {
		exit(1);
	}

	mid = amount / 2;

	i = 0;
	j = mid;
	k = 0;

	while (i < mid && j < amount) {
		if (group[i] <= group[j]) {
			tmp[k] = group[i++];
		}
		else {
			tmp[k] = group[j++];
		}
		++k;
	}

	if (i == mid) {
		while (j < amount) {
			tmp[k++] = group[j++];
		}
	}
	else {
		while (i < mid) {
			tmp[k++] = group[i++];

		}
	}

	for (i = 0; i < amount; ++i) {
		group[i] = tmp[i];
	}

	free(tmp);
}

