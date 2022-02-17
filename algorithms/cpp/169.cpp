class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums.front();
        int count = 0;
        for (const int num : nums) {
            if (num == major) count += 1;
            else if (count > 0) count -= 1;
            else {
                major = num;
                count += 1;
            }
        }
        return major;
    }
};
