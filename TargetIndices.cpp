class Solution {
public:
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int i = 0;
        int end = nums.size()-1;
        while(i <= end){
            if(nums[i] == target){
                v.push_back(i);
            }
            i++;
        }
        return v;
    }
};