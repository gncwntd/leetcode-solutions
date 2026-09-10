int climbStairs(int n) {
    if (n <= 2) return n;

    int prev2 = 1;
    int prev1 = 2;

    for (int i = 3; i <= n; i++) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

/*
70. Climbing Stairs
Runtime
0
ms
Beats
100.00%
Memory
8.55
MB
Beats
39.72%
*/
