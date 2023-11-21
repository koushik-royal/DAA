#include <stdio.h>
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int maxSumWithEqualDigitSums(int nums[], int size) {
    const int maxDigitSum = 200;
    int digitSumIndex[maxDigitSum * 2 + 1];
    for (int i = 0; i < maxDigitSum * 2 + 1; i++) {
        digitSumIndex[i] = -1;
    }

    int maxSum = 0;
    for (int i = 0; i < size; i++) {
        int sum = digitSum(nums[i]);
        if (digitSumIndex[sum] != -1) {
            int index = digitSumIndex[sum];
            maxSum = (nums[index] + nums[i] > maxSum) ? (nums[index] + nums[i]) : maxSum;
        }
        digitSumIndex[sum] = (digitSumIndex[sum] == -1) ? i : digitSumIndex[sum];
    }

    return maxSum;
}

int main() {
    int nums[] = { 51, 71, 17, 42 };
    int size = sizeof(nums) / sizeof(nums[0]);

    int maxSum = maxSumWithEqualDigitSums(nums, size);
    printf("Maximum value of nums[i] + nums[j]: %d\n", maxSum);

    return 0;
}