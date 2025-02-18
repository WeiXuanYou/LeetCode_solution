
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if(n == 0) return;
    while(--nums1Size >= 0){
      if(n > 0  && m > 0){
        if(nums1[m - 1] >= nums2[n - 1]) nums1[nums1Size] = nums1[--m];
        else nums1[nums1Size] = nums2[--n];
      }
      else
        nums1[nums1Size] = (m == 0) ? nums2[--n] : nums1[--m];
    }
}