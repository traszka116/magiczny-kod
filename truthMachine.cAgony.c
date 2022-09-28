#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// void truth(void);
void truth(void)
{
	printf("1\n");
	truth();
}
void pass(void)
{
	printf("\n0\n");
	return;
}

typedef void (*func_ptr_t)(void);

func_ptr_t options[] = {pass, truth};
uint8_t *funTable;

int main()
{
	funTable = calloc(256, sizeof(char));
	memset(funTable, 1, 256);

	funTable[0] = 0;
	int switcher;
	
	printf(">");
	scanf("%d", &switcher);
	options[funTable[switcher]]();

	return (0);
}