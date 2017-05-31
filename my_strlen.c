#include <stdio.h>

int my_strlen(char *s);

int main() {
	char s[] = "Hello, World!";
	printf("Testo = %s\n", s);
	printf("Length: %i\n", my_strlen(s));
}

int my_strlen1(char *s) {
	int len;

	for(len = 0; s[len] != '\0'; len++);

	return len;
}

int my_strlen(char *s) {
	int len = 0;

	while(s[len++] != '\0');	

	return len - 1;
}

