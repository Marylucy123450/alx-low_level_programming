#!/usr/bin/python3
"""
Returns the perimeter of the island described in grid
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
"""


def island_perimeter(grid):
    """function that returns the perimeter
    of the island described in grid"""
    row = 0
    col = 0
    for i in grid:
        if 1 in i:
            col += 1
            temp = 0
            for j in i:
                if j == 1:
                    temp += 1
            if temp > row:
                row = temp
    return 2 * (row + col)
