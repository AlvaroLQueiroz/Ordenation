#include <stdio.h>
#include <stdlib.h>
#include "../include/testing.h"
#include "../include/aleatory.h"
#include "../include/orderly.h"
#include "../include/bubble_sort.h"
#include "../include/bubble_sort_improved.h"
#include "../include/insertion_sort.h"
#include "../include/merge_sort.h"
#include "../include/quick_sort_first.h"
#include "../include/quick_sort_aleatory.h"
#include "../include/quick_sort_median.h"
#include "../include/heap_sort.h"
#include "../include/print.h"

void testing(int amount){

	int *group;
	
	printstr("\n#####Testando bubble sort.####################\n");
	group = crescent(amount);
	printstr("Conjunto crescente:\n");
	printgroup(group, amount);
	printf(".");
	printf(".");
	bubble_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente:\n");
	printgroup(group, amount);
	printf(".");
	bubble_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio:\n");
	printgroup(group, amount);
	printf(".");
	bubble_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("################################################\n\n\n");


	printstr("#####Testando bubble sort melhorado.############\n");
	group = crescent(amount);
	printstr("Conjunto crescente:\n");
	printgroup(group, amount);
	printf(".");
	bubble_sort_improved(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente:\n");
	printgroup(group, amount);
	printf(".");
	bubble_sort_improved(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio:\n");
	printgroup(group, amount);
	printf(".");
	bubble_sort_improved(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("################################################\n\n\n");

	printstr("#####Testando Insertion sort.#####\n");
	group = crescent(amount);
	printstr("Conjunto crescente:\n");
	printgroup(group, amount);
	printf(".");
	insertion_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente:\n");
	printgroup(group, amount);
	printf(".");
	insertion_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio:\n");
	printgroup(group, amount);
	printf(".");
	insertion_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("################################################\n\n\n");


	printstr("#####Testando Merge sort.#####\n");
	group = crescent(amount);
	printstr("Conjunto crescente:\n");
	printgroup(group, amount);
	printf(".");
	merge_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente:\n");
	printgroup(group, amount);
	printf(".");
	merge_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio:\n");
	printgroup(group, amount);
	printf(".");
	merge_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("################################################\n\n\n");



	printstr("#####Testando quick sort primeiro elemento.#####\n");
	group = crescent(amount);
	printstr("Conjunto crescente:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_first(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_first(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_first(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("################################################\n\n\n");

	printstr("#####Testando quick sort aleatorio.#############\n");
	group = crescent(amount);
	printstr("Conjunto crescente:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_aleatory(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_aleatory(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_aleatory(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("################################################\n\n\n");


	printstr("#####Testando quick sort mediano.###############\n");
	group = crescent(amount);
	printstr("Conjunto crescente:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_median(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_median(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio:\n");
	printgroup(group, amount);
	printf(".");
	quick_sort_median(group, 0, amount - 1);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("################################################\n\n\n");


	printstr("######Testando Heap sort.#######################\n");
	group = crescent(amount);
	printstr("Conjunto crescente:\n");
	printgroup(group, amount);
	printf(".");
	heap_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente:\n");
	printgroup(group, amount);
	printf(".");
	heap_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio:\n");
	printgroup(group, amount);
	printf(".");
	heap_sort(group, amount);
	printstr("Conjunto ordenado:\n");
	printgroup(group, amount);
	printf(".");
	printstr("################################################\n\n");
}

