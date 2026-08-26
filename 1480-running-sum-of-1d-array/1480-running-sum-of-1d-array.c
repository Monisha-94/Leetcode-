/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int n, int* returnSize) {
       *returnSize=n;
    for(int i=1;i<n;i++){
        nums[i]=nums[i]+nums[i-1];
    }
    return nums;
}
    
