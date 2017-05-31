#include <stdio.h>
#include <stdlib.h>

int *get_values(int *size);
void print_values(int *values, int size);

int main() {
	int size;
	int *p = get_values(&size);
	print_values(p, size);
}

void print_values(int *values, int size) {
	for(int i = 0; i < size; i++) {
		printf("%i ", values[i]);
	}
	printf("\n");
}

int *get_values(int *size) {
	*size = 0;
	int *p = NULL;
	int *previous_p = NULL;
	int value;
	
	do {
		scanf(" %i", &value);

		if(value != 0) {
			(*size)++;
			p = (int *) malloc(*size * sizeof(int));
			
			for(int i = 0; i < *size - 1; i++) {
				*(p + i) = *(previous_p + i);	
			}

			*(p + *size - 1) = value;

			if (previous_p != NULL) { 
				free(previous_p);
			}


			previous_p = p;
		}
	} while(value != 0);

	return p;
}

