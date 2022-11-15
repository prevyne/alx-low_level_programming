#include <stdlib.h>
#include "main.h"

/**
 * atoi - converts string to integer
 * @nprt: character
 * Return: integer
 */

int atoi (const char *nptr)
{
  return (int) strtol (nptr, (char **) NULL, 10);
}

