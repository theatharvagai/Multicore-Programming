#include<stdio.h>
#include<omp.h>

void fn_helloworld_prl()
{
#pragma omp parallel
	printf("hello world parallel\n");
}