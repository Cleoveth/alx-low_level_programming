#include "main.h"
/**
*_isdigit - function that checks if a  character is a digit or not
*@c: tested character
*Return: returns 1 if it is a digit , 0 if otherwise
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
