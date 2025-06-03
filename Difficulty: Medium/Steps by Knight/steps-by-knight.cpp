class Solution {
  public:
    int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
        // All 8 possible moves for a knight
        vector<pair<int, int>> directions = {
            {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2},
            {1, -2}, {1, 2}, {2, -1}, {2, 1}
        };

        // Visited matrix
        vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));

        // Queue for BFS: stores tuple (x, y, steps)
        queue<tuple<int, int, int>> q;

        // Push the starting position with 0 steps
        q.push(make_tuple(knightPos[0], knightPos[1], 0));
        visited[knightPos[0]][knightPos[1]] = true;

        while (!q.empty()) {
            int x, y, steps;
            tie(x, y, steps) = q.front();
            q.pop();

            // If current position is the target
            if (x == targetPos[0] && y == targetPos[1])
                return steps;

            // Explore all 8 moves
            for (auto dir : directions) {
                int nx = x + dir.first;
                int ny = y + dir.second;

                // Check if within bounds and not visited
                if (nx >= 1 && ny >= 1 && nx <= n && ny <= n && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push(make_tuple(nx, ny, steps + 1));
                }
            }
        }

        return -1; // Not reachable
        
    }
};