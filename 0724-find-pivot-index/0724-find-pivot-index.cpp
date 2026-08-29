class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int totalSum = 0;
        
        // 1. Calculate the sum of all elements in the array
        for (int num : nums) {
            totalSum += num;
        }
        
        int leftSum = 0;
        
        // 2. Iterate through the array and find the pivot index
        for (int i = 0; i < nums.size(); i++) {
            // The right sum is the total sum minus the left sum and the current element
            int rightSum = totalSum - leftSum - nums[i];
            
            if (leftSum == rightSum) {
                return i; // Found the leftmost pivot index
            }
            
            leftSum += nums[i];
        }
        
        // If no such index exists
        return -1;
    }
};