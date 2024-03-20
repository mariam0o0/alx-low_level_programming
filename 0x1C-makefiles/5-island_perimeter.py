#!/usr/bin/python3
"""5-island_perimeter module."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    n = 0
    m = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                m += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    n += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    n += 1
    return m * 4 - n * 2
