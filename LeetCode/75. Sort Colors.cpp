class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            bool swapped = false;
            for(int j = 0; j < nums.size() - i; j++) {
                if (nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                    swapped = true;
                }
            }
            if (swapped == false) {
                break;
            }
        }
    }
};
