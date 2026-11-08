class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> prev;
         int n = nums.size();
         for(int i=0; i<n; i++){
            int difference = target - nums[i];
            if(prev.find(difference) != prev.end()){
                return {prev[difference],i};
            }
            prev.insert({nums[i],i});
         }
         return {};
    }
};
