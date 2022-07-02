#include<stdio.h>
/**
 * main - main code
 * Descrption :printout small letters and capital letters
 * Return : 0
 */

int main(void)
{	
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
