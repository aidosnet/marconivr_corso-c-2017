#include <stdio.h>

int main() {
	int n;
	int i;
	int sum = 0;

	printf("Valore: ");
	scanf("%i", &n); 

	for(i = 1; i <= n; i++) {
		if(i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	printf("Somma: %i\n\n", sum);

	return 0;
}
