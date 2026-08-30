int tribonacci(int n) {
   
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;

    int q = 0;
    int w = 1;
    int e = 1;
    
    for(int i = 3; i <= n; i++){
        int next = q+w+e;
        q = w;
        w = e;
        e = next;

    }

    return e;


}

/*Runtime
0
ms
Beats
100.00%
Memory
8.59
MB
Beats
36.63%*/