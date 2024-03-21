#!/usr/bin/python3


def island_perimeter(grid):
    """
    Function which calculates the perimeter of an island
    """
    i = 0
    type_element = {"lone" : 4, "edge": 3, "middle" : 2, "semi-center" : 1,"center": 0}
    rolling_sum = 0

    while (i < len(grid)):
        j = 0
        while (j < len(grid[i])):
            if (grid[i][j] == 1):
                try:
                    if (
                        (grid[i][j - 1] == 0 and j != 0)
                        and (grid[i][j + 1] == 0)
                        and (grid[i - 1][j] == 0 and i != 0)
                        and grid[i + 1][j] == 0
                        ):
                        if (i == 0 or j == 0 or (i == 0 and j == 0)):
                            rolling_sum += type_element["lone"]
                        rolling_sum += type_element["lone"]
                        return (rolling_sum)
                    elif (
                            grid[i][j+1] == 1 and (grid[i][j-1] == 1 and j != 0) and ((grid[i-1][j] == 0 and i != 0) and grid[i+1][j] == 0) or
                            grid[i+1][j] == 1 and (grid[i-1][j] == 1 and i != 0) and ((grid[i][j-1] == 0 and j != 0) and grid[i][j+1] == 0) or
                            (grid[i-1][j] == 1 and i != 0 ) and (grid[i][j-1] == 1 and j != 0) and (grid[i+1][j] == 0 and (grid[i][j+1] == 0)) or
                            (grid[i+1][j] == 1 and grid[i][j+1] == 0) and ((grid[i][j-1] == 0 and j != 0) and (grid[i-1][j] == 0 and i != 0))
                        ):
                        rolling_sum += type_element["middle"]
                    elif (
                            grid[i][j+1] == 1 and ((grid[i-1][j] == 0 and i != 0) and (grid[i][j-1] == 0 and j != 0) and (grid[i+1][j] == 0)) or
                            grid[i+1][j] == 1 and ((grid[i][j-1] == 0 and j != 0) and (grid[i-1][j] == 0 and i != 0) and (grid[i][j+1] == 0)) or
                            (grid[i][j-1] == 1 and j != 0) and ((grid[i-1][j] == 0 and i != 0) and grid[i][j+1] == 0 and (grid[i+1][j] == 0)) or
                            (grid[i-1][j] == 1 and i != 0) and (grid[i][j+1] == 0 and grid[i+1][j] == 0 and (grid[i][j-1] == 0 and j != 0))
                        ):
                        rolling_sum += type_element["edge"]
                    elif (
                            (grid[i][j - 1] == 1 and j != 0)
                            and (grid[i][j + 1] == 1)
                            and (grid[i - 1][j] == 1 and i != 0)
                            and grid[i + 1][j] == 1
                        ):
                        rolling_sum += type_element["center"]
                    elif (
                            grid[i][j+1] == 0 and ((grid[i-1][j] == 1 and i != 0) and (grid[i][j-1] == 1 and j != 0) and (grid[i+1][j] == 1)) or
                            grid[i+1][j] == 0 and ((grid[i][j-1] == 1 and j != 0) and (grid[i-1][j] == 1 and i != 0) and (grid[i][j+1] == 1)) or
                            (grid[i][j-1] == 0 and j != 0) and ((grid[i-1][j] == 1 and i != 0) and grid[i][j+1] == 1 and (grid[i+1][j] == 1)) or
                            (grid[i-1][j] == 0 and i != 0) and (grid[i][j+1] == 1 and grid[i+1][j] == 1 and (grid[i][j-1] == 1 and j != 0))
                        ):
                        rolling_sum += type_element["semi-center"]
                except IndexError:
                        rolling_sum += 0
                        pass
            j += 1
        i += 1
    return (rolling_sum)
