#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
    int count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}

int main()
{
    int nums[] = {3,2,2,3};
     int numsSize = sizeof(nums) / sizeof(nums[0]);
    int val = 3;

    int newLength = removeElement(nums, numsSize, val);

   printf("Modified Array: ");

    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("Number of elements not equal to %d: %d\n", val, newLength);




    return (0);
}