#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: 1 (Error)
 */
int main(void)
{
int l = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19 ");

write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", l);
return (1);
}
