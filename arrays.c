#include <stdio.h>
#include <stdlib.h>

int main() {

	int array_of_int[10];

	for (int i = 0; i < 10; i++) {
		array_of_int[i] = i;
	}

	//array_of_int[0] = 23;

	*(array_of_int) = 5;
	*(array_of_int+1) = 10;
	*(array_of_int+2) = 14;

	//array_of_int + n*sizeof(int)
	//array_of_int[2]
	//array_of_int + 2*sizeof(int)



	for (int i = 0; i < 10; i++) {
		printf("%d ", array_of_int[i]);

	}
	printf("\n");

	return 0;
}
