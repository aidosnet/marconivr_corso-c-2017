#include <stdio.h>
#define BEGIN {
#define END }
#define THEN 
#define IF if
#define FOR for
#define WRITE printf
#define FUNCTION 

FUNCTION int main()
BEGIN
	int n;
	int i;
	int sum = 0;

	WRITE("Valore: ");
	scanf("%i", &n); 

	FOR(i = 1; i <= n; i++)
	BEGIN
		IF (i % 3 == 0 || i % 5 == 0) THEN
		BEGIN
			sum += i;
		END
	END

	WRITE("Somma: %i\n\n", sum);

	return 0;
END
