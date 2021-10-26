#include <stdio.h>
#include <stdlib.h>

int main() {
	int* array = malloc(5 * sizeof(int));
	for (int i = 0; i < 5; ++i) array[i] = i;
	array = realloc(array, 10 * sizeof(int));
	for (int i = 5; i < 10; ++i) array[i] = i;
	for (int i = 0; i < 10; ++i) {
	    printf("%d%c", array[i], i == 9 ? '\n' : ' ');
	}

	printf("%d\n", 45 ^ 17);
	return 0;
}
