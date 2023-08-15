#include <stdio.h>

// int searchInsert(int* nums, int numsSize, int target){
//     for (int i = 0; i < numsSize; i++)
//     {
//         if (nums[i] == )
//         if (nums[i] == target)
//             return i;
//         if (nums[i+1] == target + 1)
//             return i+1;
//     }
//     return numsSize;
// }

int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] >= target)
            return i;
    }
    return numsSize;
}


int main()
{
    int nums[] = {1,3,5,6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int val = 4;

    int newLength = searchInsert(nums, numsSize, val);

    printf("Element is at index %d\n", newLength);




    return (0);
}