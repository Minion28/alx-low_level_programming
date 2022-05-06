#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *\**alloc_grid - pointer to a 2 dimensional array
 * @width: width input
 * @height: height input
 * Return; NULL if it fails
 */

int **alloc_grid(int width, int height)
{
int **ar;
int x;
if (width == 0 || height == 0)
{
return (NULL);
}
ar = (int **) malloc(height * sizeof(int *));
if (ar == 0)
{
return (NULL);
}
for (x = 0; x < height; x++)
{
ar[x] = malloc * sizeof(int);
}
if (ar != NULL)
{
return (ar);
}
return (NULL);
}
