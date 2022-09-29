#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef void (*func_ptr_t)(void);

uint8_t number = 1;

void fizz(), increase(), buzz(), print(), fizzbuzz(), fizzBuzzChceck(), end();

func_ptr_t increase_cases[] = {increase, end};
uint8_t *increase_cases_table;

func_ptr_t fizzbuzz_cases[] = {fizz, buzz, fizzbuzz, print};
uint8_t fizzbuzz_cases_table[] = {2, 3, 3, 0, 3, 1, 0, 3, 3, 0, 1, 3, 0, 3, 3};

int main()
{
    increase_cases_table = calloc(101, sizeof(uint8_t));
    increase_cases_table[100] = 1;
    increase_cases[increase_cases_table[number - 1]]();

    printf("Done.\n");
    return (0);
}

void increase()
{
    // printf("%d\n", number);
    fizzBuzzChceck();
    number++;
    increase_cases[increase_cases_table[number - 1]]();
}
void end()
{
    return;
}
void print()
{
    printf("%d\n", number);
}
void fizz()
{
    printf("Fizz\n");
}
void buzz()
{
    printf("Buzz\n");
}
void fizzbuzz()
{
    printf("FizzBuzz\n");
}
void fizzBuzzChceck()
{
    fizzbuzz_cases[fizzbuzz_cases_table[number % 15]]();
}