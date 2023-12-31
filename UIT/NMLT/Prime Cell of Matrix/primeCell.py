def isDominant(i, j, row, col, grid):
    for x in [-1, 0, 1]:
        for y in [-1, 0, 1]:
            if x == 0 and y == 0:  # Skip the cell itself
                continue
            nx, ny = i + x, j + y
            if 0 <= nx < row and 0 <= ny < col and grid[i][j] <= grid[nx][ny]:
                return False
    return True


def countDominantCells(grid):
    row, col = len(grid), len(grid[0])
    count = 0
    for i in range(row):
        for j in range(col):
            if isDominant(i, j, row, col, grid):
                count += 1
    return count


if __name__ == '__main__':
    grid_rows = int(input().strip())
    grid_columns = int(input().strip())
    grid = []
    for _ in range(grid_rows):
        grid.append(list(map(int, input().strip().split())))
    print(countDominantCells(grid))
