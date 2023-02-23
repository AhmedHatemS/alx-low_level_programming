#include "main.h"

/**
 * _isdigit - checks if the character is digit or not
 * @c : the letter to be checked
 * Return: 1 if the character is digit otherwise 0
 */

int _isdigit(int c)
{
  if(c>='0 && c<='9')
     return 1;
  return 0;
}
