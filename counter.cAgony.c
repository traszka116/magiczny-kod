#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// program to count from n to 0
typedef void (*func_ptr_t)(void);

uint8_t n;

void decrease(), end();
func_ptr_t decreaseCases[] = {decrease, end};
uint8_t *decreaseCasesTable;

int main()
{

	printf(">");
	scanf("%d", &n);
	printf("Counting from %d to 1\n", n);

	decreaseCasesTable = calloc(n, sizeof(uint8_t));
	decreaseCasesTable[0] = 1;

	decreaseCases[decreaseCasesTable[n - 1]]();
	printf("Done.\n");
	return (0);
}

void decrease()
{
	printf("%d\n", n);
	n--;

	decreaseCases[decreaseCasesTable[n]]();
}

void end()
{
	return;
}
