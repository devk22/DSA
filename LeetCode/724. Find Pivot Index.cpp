class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int total = 0;
        for (int i: nums) {
            total = total + i; //this calculates the total sum of the array
        }

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = total - (nums[i] + leftSum);
            if (rightSum == leftSum) {
                return i;
            }
            else {
                leftSum = leftSum + nums[i];
            }
        }
        return -1;
    }
};
