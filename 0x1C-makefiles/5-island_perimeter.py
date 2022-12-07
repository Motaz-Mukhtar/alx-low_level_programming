#!/usr/bin/python3
"""Create fucntion that returns the perimeter of island"""


def island_perimeter(grid):
    """Returns the perimeter of the island
        described in grid"""
    perimeter = 0
    size = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                size += 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter += 1

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter += 1
    return size * 4 - perimeter * 2
