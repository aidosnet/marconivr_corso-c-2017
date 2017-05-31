#include <stdio.h>

char encrypt(char, int);

int main() {
	char c = 'A';
	printf("c1 = %c c2 = %c\n", c, encrypt(c, 3));
	c = 'Z';
	printf("c1 = %c c2 = %c\n", c, encrypt(c, 3));
}

char encrypt(char c, int pos) {
	c = (c - 'A' + pos) % 26 + 'A';
	return c;
}
