Suppose there're total n columns, then there're total n balls, dropping from (0, j), j in range of [0, n). For each ball, it starts at position (row = 0, col = j). At current grid grid[row][col], it will decide this ball's next position. If grid[row][col] == 1, this ball's next position will be (row+1, col+1); If grid[row][col] == -1, this ball's next position will be (row+1, col-1).
There're two situations where this ball cannot reach the last row:
​
This ball stucks at the wall. which means this ball needs to go to (row+1, col+1), but col+1 >= n; or this ball needs to go to (row+1, col-1), but col - 1 < 0.
This ball stucks at V shape, which means this grid[row][col] == 1 and grid[row][col+1] == -1; Or grid[row][col] == -1 and grid[row][col-1] == 1.
If this ball stucks, push back -1 into ans and break the while loop; If this ball reaches the last row, push back current col into ans.