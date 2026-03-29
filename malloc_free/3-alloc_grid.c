#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
```

How the memory layout works:
```
grid → [ row0* | row1* | row2* | row3* ]
          ↓       ↓       ↓       ↓
        [0,0,0] [0,0,0] [0,0,0] [0,0,0]
