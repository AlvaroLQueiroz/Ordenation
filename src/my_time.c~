#include "../include/my_time.h"
#include "../include/print.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

struct timeval tv;

double t1;

double t2;

void my_clock1(){
	gettimeofday(&tv, NULL);
	t1 = (double)tv.tv_sec + tv.tv_usec / 1e6;
}

void my_clock2(){

	char aux[50];

	gettimeofday(&tv, NULL);
	t2 = (double)tv.tv_sec + tv.tv_usec / 1e6;

	sprintf(aux, "%.8f segundos", t2 - t1);

	printstr(aux);
}

