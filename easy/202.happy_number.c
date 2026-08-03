#include <limits.h>

int sqrsum(int n){
    
    int sum = 0;
    
    while(n > 0){
        int step = n % 10;
        sum += step * step;
        n /= 10;
    }

    return sum;
}

bool isHappy(int n) {

    int seen[100];
    int count = 0;


    while(n!=1){
        for(int i = 0; i < count; i++){
            if(seen[i] == n){
                return false;
            }
        }
        seen[count++] = n;

        n = sqrsum(n);
    }

    return true;
    
    
}