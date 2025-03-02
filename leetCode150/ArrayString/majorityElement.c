int majorityElement(int* nums, int numsSize) {
    int cnt = nums[0];
    int counts = 1;
    for(int i = 1;i < numsSize;i++){
        if(!counts) cnt = nums[i];
        else if(nums[i] != cnt){
            counts--;   
            continue;
        }
        counts++;
    }
    return cnt;
}

// solution 2:
/*
int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int candidate = 0;
    for(int i = 0;i < numsSize;i++){
        if(count == 0){ 
            candidate = nums[i];
            count = 1;
        }
        else if(candidate == nums[i]) count++;
        else count--;
    }
    return candidate;
}
*/
// solution 3:
/*
int majorityElement(int* nums, int numsSize) {
   int count = 0;
    int candidate = 0;

    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }

    return candidate;
 
}
*/