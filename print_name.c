#include <stdio.h>
#include <stdlib.h>


long change(long *ptr) {
//	printf("%p", ptr);
	(*ptr) = 34; 
}


long sum(long *a, long *b) {
//	*a = 34;
    return (*a)+(*b);
}


int main(int argc, char *argv[]) {

//	printf("%s\n", argv[0]);

	if (argc == 3) {
//		printf("You gave me 3 parameters!\n");
	//	int a = strtol(argv[1], NULL, 10);
	//	int b = strtol(argv[2], NULL, 10);
		long a = strtol(argv[1], NULL, 10);
		long b = strtol(argv[2], NULL, 10);
		
		change(&a);

		printf("%ld\n", a);
		printf("%ld\n", sum(&a,&b));

	} else {
		printf("Please give me 3 parameters!\n");
		return 1;
	}

	return 0;
}
