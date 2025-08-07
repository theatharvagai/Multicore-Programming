#include"stdio.h"
#include "omp.h"

void fn_wsc_for_2constructs()
{
	int i;
#pragma omp parallel
	{
		printf("Thread %d work sharing starts\n", omp_get_thread_num());
#pragma omp for 
		for (i = 0; i < 12; i++)
		{
			printf("hello world in iteration : %d by thread ID %d \n", i, omp_get_thread_num());
		}
	}
}

void fn_wsc_for_1construct()
{
	int i;
#pragma omp parallel for 
		for (i = 0; i < 12; i++)
		{
			printf("hello world in iteration : %d by thread ID %d \n", i, omp_get_thread_num());
		}
}