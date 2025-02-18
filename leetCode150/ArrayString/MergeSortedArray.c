
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if(nums2Size == 0) return nums1;
    else if (m == 0 ) return nums2;
    
    while(nums1Size-- != 0){
        if(nums1[m - 1] > nums2[n - 1])
           nums1[nums1Size] = nums1[--m];
        else
            nums1[nums1Size] = nums2[--n];
    }
    return nums1;
}