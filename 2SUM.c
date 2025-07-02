#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL; 
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target value: ");
    scanf("%d", &target);

    int ret_size;
    int* ret = twoSum(nums, n, target, &ret_size);

    if (ret != NULL) {
        printf("Indices found: [%d, %d]\n", ret[0], ret[1]);
        free(ret); 
    } else {
        printf("No two sum solution found.\n");
    }
    free(nums);
    return 0;
}
