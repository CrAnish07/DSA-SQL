class Solution {
// sync to github    
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>unique_set(nums.begin(), nums.end());
        nums.assign(unique_set.begin(), unique_set.end());
        return unique_set.size();
    }
};