/*
1,000 - 1,000,000                           *1
1,000,000 - 1,000,000,000                   *2
1,000,000,000 - 1,000,000,000,000           *3
1,000,000,000,000 - 1,000,000,000,000,000   *4
    

1,308,201       1,000,000   308,201 * 2
                1,000       
*/

long long countCommas(long long n) {
    
    if(n < 1000) return 0;

    unsigned long long first = 1000;

    unsigned long long total = 0;
    unsigned long long count = 0;

    int commas = 1;

    while(first <= n){
        unsigned long long last = first * 1000 - 1;

        if(last > n) last = n;

        count = last - first + 1;

        total += count * commas;
        first *= 1000;
        commas++;
    }
    return total;




}
/*
3871. Count Commas in Range II

0
ms
Beats
100.00%
Memory
9.50
MB
Beats
57.89%
