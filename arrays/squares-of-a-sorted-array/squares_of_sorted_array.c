/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    for(int i =0;i<numsSize;i++){
        nums[i]=nums[i]*nums[i];
    }
    for(int i=0;i<numsSize;i++){
        for (int j=0;j<numsSize-i-1;j++){
            if (nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
     *returnSize=numsSize;
return nums;
}
