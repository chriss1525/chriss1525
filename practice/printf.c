#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - print an integer
 * @n: integer to print
 * Return: number of characters printed
 */
int print_number(int n)
{
    unsigned int num;
    int counter = 0;

    if (n < 0)
    {
        putchar('-');
        num = -n;
        counter++;
    }
    else
        num = n;

    if (num / 10)
        counter += print_number(num / 10);

    putchar((num % 10) + '0');
    counter++;

    return (counter);
}

/**
 * main - entry point
 *
 */
int main()
{
    int n = 50;

    print_number(n);
}
