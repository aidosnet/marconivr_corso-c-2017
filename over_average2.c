#include <stdio.h>
#include <stdlib.h>

double average(int values[], int size);
int over_average(int values[], int size);
int get_values(int **p);
void print_values(int *values, int size);

int main() {
	int *values;
	int size = get_values(&values);   
	printf("values: %p\n", values);    
	print_values(values, size);
	
    int _over_average = over_average(values, size);
	printf("Media: %lf\n", average(values, size));
	printf("N. valori sopra la media: %i\n", _over_average);
}

void print_values(int *values, int size) {
	printf("------------------\n");
	
    	for(int i = 0; i < size; i++) {
		printf("%i ", values[i]);
	}
	printf("\n");
	
    printf("------------------\n");
}

int get_values(int **array) {
	int size = 0;
	int *p = NULL;
	int *previous_p = NULL;
	int value;

	do {
		scanf(" %i", &value);

		if (value != 0) {
			size++;
			p = (int *) malloc(size * sizeof(int));
			printf("p >> %p\n", p);
	
            for(int i = 0; i < size - 1; i++) {
				*(p + i) = *(previous_p + i);
			}

			*(p + size - 1) = value;

			if (previous_p != NULL) {
				free(previous_p);
			}
			
			previous_p = p;
		}
	} while(value != 0);

	*array = p;	
	return size;
}

double average(int values[], int size) {
	double sum = 0;

	for(int i = 0; i < size; i++) {
		sum += values[i];
	}

	return sum / size;
}

int over_average(int values[], int size) {
	int count = 0;
	
    double _average = average(values, size);

	for(int i = 0; i < size; i++) {
		if (values[i] > _average) {
			count++;
		}
	}

	return count;
}


