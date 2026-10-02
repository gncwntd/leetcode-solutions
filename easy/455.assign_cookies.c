int compare(const void*a,const void*b){
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x>y) - (x<y);
}
int findContentChildren(int* g, int gSize, int* s, int sSize) {
    
    qsort(g,gSize,sizeof(int),compare);
    qsort(s,sSize,sizeof(int),compare);

    int count = 0;

    int i = 0, j = 0;

    while(i < gSize && j < sSize){
        if(s[j] >= g[i]){
            count++;
            i++;
        }
        j++;
    }
    
    return count;
    

}
/*
455. Assign Cookies

solved using two pointers to give each child at most one cookie

Runtime
12
ms
Beats
85.94%
Memory
12.72
MB
Beats
6.25%
*/