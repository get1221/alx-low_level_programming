#include<stdio.h>
/**
 * main - main code
 * Descrption :printout small letters and capital letters
 * Return :0
 */
int main(void)
{	
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
char c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
return (0);
}
