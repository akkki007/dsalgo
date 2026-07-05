class Solution {
public:
    vector<int> pathsWithMaxScore(vector<string>& board) {
        const int MOD = 1e9 + 7;
        int n = board.size();

        vector<vector<long long>> dp(n, vector<long long>(n, -1));
        vector<vector<long long>> cnt(n, vector<long long>(n, 0));

        // Seed at S (bottom-right)
        dp[n-1][n-1] = 0;
        cnt[n-1][n-1] = 1;

        // Feeder directions: up, left, up-left
        int dr[3] = {1, 0, 1};
        int dc[3] = {0, 1, 1};

        // Sweep from bottom-right to top-left
        for (int i = n-1; i >= 0; i--) {
            for (int j = n-1; j >= 0; j--) {
                if (i == n-1 && j == n-1) continue;
                if (board[i][j] == 'X') continue;

                long long best = -1, ways = 0;
                for (int k = 0; k < 3; k++) {
                    int ni = i + dr[k], nj = j + dc[k];
                    if (ni >= n || nj >= n) continue;
                    if (dp[ni][nj] == -1) continue;

                    if (dp[ni][nj] > best) {
                        best = dp[ni][nj];
                        ways = cnt[ni][nj];
                    } else if (dp[ni][nj] == best) {
                        ways = (ways + cnt[ni][nj]) % MOD;
                    }
                }

                if (best == -1) continue;

                int value = (board[i][j] == 'E') ? 0 : (board[i][j] - '0');
                dp[i][j] = best + value;
                cnt[i][j] = ways;
            }
        }

        if (dp[0][0] == -1) return {0, 0};
        return {(int)dp[0][0], (int)cnt[0][0]};
    }
};