#include <stdio.h>

void twoSum(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d,%d]", i, j);
                return;
            }
        }
    }
    printf("No solution found.\n");
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int target = 6;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    twoSum(nums, numsSize, target);
    return 0;
}
