bool isIsomorphic(char* s, char* t) {
    
    int ss[256] = {0};
    int tt[256] = {0};

    for(int i = 0; s[i] != '\0';i++){
        char a = s[i];
        char b = t[i];

        if(ss[a] != 0 && ss[a] != b) return false;

        if(tt[b] != 0 && tt[b] != a) return false;

        ss[a] = b;
        tt[b] = a;
    }

    return true;
}

/*
205. Isomorphic Strings
Runtime
0
ms
Beats
100.00%
Memory
9.05
MB
Beats
33.52%

