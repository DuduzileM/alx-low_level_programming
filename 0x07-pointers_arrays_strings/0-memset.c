#include "main.h" 

/** 
* _memset - this function fills memory block with a constant byte
* @s: pointed destination
* @b: constant byte
* @n: byte
* Return: Always 0 (success)
*/
char *_memset(char *s, char b, unsigned int n) 
{
    while (n)
    {
        s[n - i] = b;
        n--;
    }
    return(s)
}
