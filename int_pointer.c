#include <stdio.h>

int main() {
	int i; // Integer i
	int *p; // Pointer to integer
	int **m; // Pointer to int pointer
	char *pc;

	i = 257;
	printf("i = %i\n", i);
	
	p = &i; // p now points to i
	(*p)++;
	printf("i = %i\n", i);	
	
	pc = p;
	printf("%p\n", pc); // Prints the address of i (in p)
		
	*(pc + 1) = 0;	
	(*pc) = (*pc) << 1;
	printf("i = %i\n", i);
	
	printf("%p\n", p); // Prints the address of i (in p)
	m = &p; // m now points to p
	printf("%p\n", m); // Prints the address of p (in m)
}
