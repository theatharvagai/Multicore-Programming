#include <stdio.h>

#define N 12

void fn_initializeArray(int a[]) {
	for (int i = 0; i < N; i++) {
		a[i] = i + 1;
	}
}

void fn_computeSquares_srl(int a[], int square[]) {
	for (int i = 0; i < N; i++) {
		square[i] = a[i] * a[i];
		printf("square of a[%d} : a[%d]^2 = %d\n", i, a[i], square[i]);
	}
}

void fn_displayResult(int square[]) {
	printf("\n Squared Result:\n");
	for (int i = 0; i < N; i++) {
		printf("square[%d] = %d\n", i, square[i]);
	}
}

int fn_num_Square() {
	int a[N], square[N];

	fn_initializeArray(a);
	fn_computeSquares_srl(a, square);
	fn_displayResult(square);
	return 0;
}