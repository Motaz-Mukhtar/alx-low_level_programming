#!/usr/bin/python3
"""Create fucntion that returns the perimeter of island"""


def island_perimeter(grid):
    """Returns the perimeter of the island
        described in grid
    """
    perimeter = 0

    if grid == [[1]]:
        return 4

    for row in range(len(grid)):
        for col in range(row):
            if grid[row][col] == 1:
                for i in range(4):
                    if (grid[row][col + 1] != 1 or
                        grid[row][col - 1] != 1 or
                        grid[row + 1][col] != 1 or
                            grid[row - 1][col] != 1):

                        perimeter += 1

    return perimeter
