#include <stdio.h>
#include <stdlib.h>

int calculate(char, int, int);

int main(int argc, char **argv) {
	int op, a, b;
	op = argv[1][0];
	a = atoi(argv[2]);
	b = atoi(argv[3]);
	printf("%d %c %d = %d\n", a, op, b, calculate(op, a, b));
	return 0;
}

int calculate(char op, int a, int b) {
	switch(op) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
	}	
	return 0;
}

