#!/usr/bin/python3
"""
Module to define a function island_perimeter
"""


def island_perimeter(grid):
    """
    Compute the perimeter of an island in a rectangular grid.

    Args:
        grid: A list of list of integers representing the grid.

    Returns:
        The perimeter of the island.

    Raises:
        None.
    """
    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
