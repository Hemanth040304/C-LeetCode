/* 1. Two Sum */
/* https://leetcode.com/problems/two-sum/submissions/ */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int x, y;
    for(int i=0,j;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                x=i, y=j;
                break;
            }
        }
    }
    *returnSize = 2;
    static int res[2];
    res[0]=x;
    res[1]=y;
    return res;
}
