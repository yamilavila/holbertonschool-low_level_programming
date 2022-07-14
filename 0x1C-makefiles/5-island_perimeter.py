#!/usr/bin/python3
"""Task 5.Island Perimeter"""


def island_perimeter(grid):
    """returns perimeter described in grid"""
    peri = 0
    rang_max = len(grid)
    count_max = len(grid[0])

    for rang in range(rang_max):
        for count in range(count_max):
            if grid[rang][count] == 1:
                if rang == rang_max - 1 or grid[rang + 1][count] == 0:
                    peri += 1
                if rang == 0 or grid[rang - 1][count] == 0:
                    peri += 1
                if count == count_max - 1 or grid[rang][count + 1] == 0:
                    peri += 1
                if count == 0 or grid[rang][count - 1] == 0:
                    peri += 1
    return peri
