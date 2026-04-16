#include <stdio.h>

int main(void) {
	int num_p1 = 1;
	int num_p2 = 1;
	int current = 0;
	int count;
	
	printf("How many times do you want to run the Fibbonacci Sequence?\n");
	scanf("%d", &count);

	for (int i = 1; i < count + 1; i++) {
		if (i == 1 || i == 2) {
			current = 1;
		} else {
			current = num_p1 + num_p2;
			num_p2 = num_p1;
			num_p1 = current;
			
		}

		printf("Number #%d: %d\n", i, current);
	}

	return 0;
}
