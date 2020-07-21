class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.empty()) return 0;
        int len = 1, ind;
        for (ind = 1; ind < nums.size(); ind++) {
            if (nums[ind] != nums[ind - 1]) {
                if (len < ind)
                    nums[len] = nums[ind];
                len++;
            }           
        }
        
        return len;
    }
};
