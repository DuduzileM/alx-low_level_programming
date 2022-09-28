#include "main.h"

/**
 * _srtlen_recursion - calculates the lenght of a string
 *  @s: string to be used
 *Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
    int sum = 0;

    if (*s != '\0')
    {
        sum++;
        sum += _srtlen_recursion(s + 1);
    
    }
    return (sum);
}
