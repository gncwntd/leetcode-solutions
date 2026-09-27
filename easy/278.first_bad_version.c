// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    int le = 0;
    int ri = n;

    while(le<ri){
        int mid = le + (ri - le)/2;

        if(isBadVersion(mid)) ri = mid;
        else le = mid + 1;
    }
    return le;

}

/*
278. First Bad Version

solved using iterative binary search to find bad version of products

Runtime
0
ms
Beats
100.00%
Memory
8.42
MB
Beats
67.17%
*/