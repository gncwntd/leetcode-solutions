int probe(int *values, int n, int value) {
    int i = value & (n - 1);

    while (values[i] != 0x7F7F7F7F && values[i] != value) {
        i = (i + 1) & (n - 1);
    }

    return i;
}

int findLHS(int *a, int n) {
    int m = 1 << (32 - __builtin_clz((unsigned) n) + !!(n & (n - 1)));
    int values[m], counts[m] = {};
    memset(values, 0x7F, sizeof(values));
    for (int i = 0; i < n; i++) {
        int p = probe(values, m, a[i]);
        values[p] = a[i];
        counts[p]++;
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        int f = counts[probe(values, m, a[i])];
        int s = counts[probe(values, m, a[i] + 1)];
        max = s > 0 ? MAX(f + s, max) : max;
    }
    return max;
}

/*
594. Longest Harmonious Subsequence

Runtime
0
ms
Beats
100.00%
Memory
10.59
MB
Beats
99.21%
*/