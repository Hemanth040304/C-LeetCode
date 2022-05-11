
//https://leetcode.com/problems/concatenation-of-array/submissions/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int *a = malloc((numsSize*2)*sizeof(int));
    int rsize = 0;

    for (int i = 0; i < numsSize; i++) {
        a[rsize++] = nums[i];
    }
    for (int i = 0; i < numsSize; i++) {
        a[rsize++] = nums[i];
    }
    *returnSize = rsize;

    return a;
}
