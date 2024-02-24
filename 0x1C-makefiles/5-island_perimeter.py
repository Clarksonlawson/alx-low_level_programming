#!/usr/bin/python3
"""
Function to calculate the perimeter of an island described in a grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A grid representing the island.

    Returns:
        int: The perimeter of the island.

    """
    perimeter = 0

    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # If the cell is land, calculate its contribution to the perimeter
            if grid[i][j] == 1:
                # Check adjacent cells for water (0)
                perimeter += 4  # Start with 4 edges
                if i > 0 and grid[i - 1][j] == 1:  # Check cell above
                    perimeter -= 2  # Subtract 2 edges (top and bottom)
                if j > 0 and grid[i][j - 1] == 1:  # Check cell to the left
                    perimeter -= 2  # Subtract 2 edges (left and right)

    return perimeter

# Test the function
if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
