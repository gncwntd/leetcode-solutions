bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
   
    for (int i = 0; i < flowerbedSize; i++) {
        
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
            (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) 
        {
            flowerbed[i] = 1;
            n--;
        }
    }

    if (n <= 0) { 
        return true; 
    }

    return false;
}
/*
Runtime
0
ms
Beats
100.00%
Memory
10.07
MB
Beats
52.99%
*/