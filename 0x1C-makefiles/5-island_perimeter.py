#!/usr/bin/python3
"""
module: 5-island_perimeter.py
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (list of list of integers): The grid representing the island.

    Returns:
    - int: The perimeter of the island.
    """
    # Initialize perimeter to 0
    perimeter = 0

    # Loop through each row of the grid
    for i in range(len(grid)):
        # Loop through each column of the grid
        for j in range(len(grid[0])):
            # Check if the current cell is land (equals 1)
            # 1 represents a land zone
            if grid[i][j] == 1:
                # Increment the perimeter by 4 (since each land cell
                # contributes 4 sides to the perimeter)
                # One cell is a square with side length 1
                perimeter += 4
                # Check if there is land in the cell above, and decrement the
                #  perimeter by 2 if true
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                # Check if there is land in the cell to the left, and decrement
                    #  the perimeter by 2 if true
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    # Return the calculated perimeter
    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

# Create a function def island_perimeter(grid): that returns the perimeter of
    #  the island described in grid:

# grid is a list of list of integers:
# 0 represents a water zone
# 1 represents a land zone
# One cell is a square with side length 1
# Grid cells are connected horizontally/vertically (not diagonally).
# Grid is rectangular, width and height don’t exceed 100
# Grid is completely surrounded by water, and there is one island (or nothing).
# The island doesn’t have “lakes” (water inside that isn’t connected to the
    #  water around the island).
