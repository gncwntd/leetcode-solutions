double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    int merged[nums1Size + nums2Size];
    int size = nums1Size + nums2Size;

    for(int i = 0; i < nums1Size; i++){
        merged[i] = nums1[i];
    }
    for(int i = 0; i < nums2Size; i++){
        merged[i + nums1Size] = nums2[i];
    }

    for(int i = 0; i < size;i++){
        int key = merged[i];
        int j = i - 1;
        while(j>=0 && merged[j] > key){
            merged[j+1] = merged[j];
            j--;
        }
        merged[j+1] = key;
    }

    double length = (nums1Size + nums2Size) / 2.0;

    if (size % 2 == 1) {
        return merged[size / 2];
    } else {
        return (merged[size / 2] + merged[size / 2 - 1]) / 2.0;
    }

}