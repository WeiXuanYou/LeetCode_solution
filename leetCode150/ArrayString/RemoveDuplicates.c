int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int k = 1;
    for(int i = 1;i < numsSize ; i ++){
        if(nums[i] != nums[i - 1])
            nums[k++] = nums[i];
    }
    return k;
}

//Our solution
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 1) return numsSize;
    int k = 0;
    for(int i = 1;i < numsSize; i++){
        while(i < numsSize && nums[i] == nums[k]) i++;
        if(i <numsSize) nums[++k] = nums[i]; 
    }
    return k + 1;
}