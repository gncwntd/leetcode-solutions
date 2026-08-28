int compress(char* chars, int charsSize) {
    
    int read = 0;
    int write = 0;

    while(read < charsSize){

        char current = chars[read];
        int count = 0;

        while(read < charsSize && chars[read] == current){
            count++;
            read++;
        }

        chars[write++] = current;

        if(count > 1){
            int divisor = 1;
            
            while(count / divisor >= 10){
                divisor *= 10;
            }
            while(divisor > 0){
                chars[write++] = '0' + count / divisor;
                count %= divisor;
                divisor /= 10;
            }
        }


    }
    return write;

}

/*

Runtime
0
ms
Beats
100.00%
Memory
11.40
MB
Beats
100.00%
*/