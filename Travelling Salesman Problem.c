#include <stdio.h>
    // All cities visited: return to starting city
    if (mask == (1 << n) - 1) {
        return cost[pos][0];
    }

    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    int ans = INT_MAX;

    for (int city = 0; city < n; city++) {
        if (!(mask & (1 << city)) && cost[pos][city] != -1) {
            int newCost = cost[pos][city] + tsp(mask | (1 << city), city);

            if (newCost < ans) {
                ans = newCost;
            }
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);

            // -1 represents no direct connection
            if (cost[i][j] == -1) {
                cost[i][j] = INT_MAX / 2;
            }
        }
    }

    // Initialize DP table
    for (int mask = 0; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            dp[mask][i] = -1;
        }
    }

    int answer = tsp(1, 0);

    printf("%d\n", answer);

    return 0;
}
