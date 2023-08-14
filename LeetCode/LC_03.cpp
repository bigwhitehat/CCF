//直接根据排序进行求解

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i-1] == nums[i])
            {
                return nums[i];
            }
        }
        return -1;
    }
};