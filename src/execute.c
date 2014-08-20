#include <stdio.h>
#include <stdlib.h>
#include "../include/execute.h"
#include "../include/aleatory.h"
#include "../include/orderly.h"
#include "../include/my_time.h"
#include "../include/bubble_sort.h"
#include "../include/bubble_sort_improved.h"
#include "../include/insertion_sort.h"
#include "../include/merge_sort.h"
#include "../include/quick_sort_first.h"
#include "../include/quick_sort_aleatory.h"
#include "../include/quick_sort_median.h"
#include "../include/heap_sort.h"
#include "../include/print.h"

void execute(int amount, int option){

	int *group;
	
	if(option){
		printstr("\n#####Executando bubble sort.####################\n");
		group = crescent(amount);
		printstr("Conjunto crescente: ");
		my_clock1();
		bubble_sort(group, amount);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = decrescent(amount);
		printstr("Conjunto decrescente: ");
		my_clock1();
		bubble_sort(group, amount);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = read_numbers(amount);
		printstr("Conjunto aleatorio: ");
		my_clock1();
		bubble_sort(group, amount);
		my_clock2();
		printf(".");
		printstr("\n");
		free(group);
		printstr("##################################################\n\n\n");


		printstr("#####Executando bubble sort melhorado.############\n");
		group = crescent(amount);
		printstr("Conjunto crescente: ");
		my_clock1();
		bubble_sort_improved(group, amount);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = decrescent(amount);
		printstr("Conjunto decrescente: ");
		my_clock1();
		bubble_sort_improved(group, amount);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = read_numbers(amount);
		printstr("Conjunto aleatorio: ");
		my_clock1();
		bubble_sort_improved(group, amount);
		my_clock2();
		printf(".");
		printstr("\n");
		free(group);
		printstr("##################################################\n\n\n");

		printstr("#####Executando Insertion sort.###################\n");
		group = crescent(amount);
		printstr("Conjunto crescente: ");
		my_clock1();
		insertion_sort(group, amount);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = decrescent(amount);
		printstr("Conjunto decrescente: ");
		my_clock1();
		insertion_sort(group, amount);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = read_numbers(amount);
		printstr("Conjunto aleatorio: ");
		my_clock1();
		insertion_sort(group, amount);
		my_clock2();
		printf(".");
		printstr("\n");
		free(group);
		printstr("##################################################\n\n\n");


		printstr("#####Executando Merge sort.#######################\n");
		group = crescent(amount);
		printstr("Conjunto crescente: ");
		my_clock1();
		merge_sort(group, amount);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = decrescent(amount);
		printstr("Conjunto decrescente: ");
		my_clock1();
		merge_sort(group, amount);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = read_numbers(amount);
		printstr("Conjunto aleatorio: ");
		my_clock1();
		merge_sort(group, amount);
		my_clock2();
		printf(".");
		printstr("\n");
		free(group);
		printstr("##################################################\n\n\n");



		printstr("#####Executando quick sort primeiro elemento.#####\n");
		group = crescent(amount);
		printstr("Conjunto crescente: ");
		my_clock1();
		quick_sort_first(group, 0, amount - 1);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = decrescent(amount);
		printstr("Conjunto decrescente: ");
		my_clock1();
		quick_sort_first(group, 0, amount - 1);
		my_clock2();
		printf(".");
		free(group);
		printstr("\n");

		group = read_numbers(amount);
		printstr("Conjunto aleatorio: ");
		my_clock1();
		quick_sort_first(group, 0, amount - 1);
		my_clock2();
		printf(".");
		printstr("\n");
		free(group);
		printstr("##################################################\n\n\n");
	}

	printstr("#####Executando quick sort aleatorio.#############\n");
	group = crescent(amount);
	printstr("Conjunto crescente: ");
	my_clock1();
	quick_sort_aleatory(group, 0, amount - 1);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente: ");
	my_clock1();
	quick_sort_aleatory(group, 0, amount - 1);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio: ");
	my_clock1();
	quick_sort_aleatory(group, 0, amount - 1);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");
	printstr("##################################################\n\n\n");


	printstr("#####Executando quick sort mediano.###############\n");
	group = crescent(amount);
	printstr("Conjunto crescente: ");
	my_clock1();
	quick_sort_median(group, 0, amount - 1);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente: ");
	my_clock1();
	quick_sort_median(group, 0, amount - 1);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio: ");
	my_clock1();
	quick_sort_median(group, 0, amount - 1);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");
	printstr("##################################################\n\n\n");


	printstr("######Executando Heap sort.#######################\n");
	group = crescent(amount);
	printstr("Conjunto crescente: ");
	my_clock1();
	heap_sort(group, amount);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");

	group = decrescent(amount);
	printstr("Conjunto decrescente: ");
	my_clock1();
	heap_sort(group, amount);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");

	group = read_numbers(amount);
	printstr("Conjunto aleatorio: ");
	my_clock1();
	heap_sort(group, amount);
	my_clock2();
	free(group);
	printf(".");
	printstr("\n");
	printstr("##################################################\n\n");

}

