    /*
    0 1 2 .. n n+1

    gain -> n
    */


    int largestAltitude(int* gain, int gainSize) {
        
        int sum = 0;

        int max = sum;

        for(int i = 0; i < gainSize; i++){
            sum += gain[i];

            if(sum > max) max = sum;

        }
        return max;

    }