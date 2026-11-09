class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentCount = 0;
        int best = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                currentCount = 0;
            } else{
                currentCount++;
                best = max(currentCount, best);
            }
        }
        return best;
    }
};