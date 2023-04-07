class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<=1)return true;
        int maxi(nums[0]);        
        for(int i=1;i<nums.size()-1;i++){
            if(maxi>0)maxi--;else return false;
            maxi=max(nums[i],maxi);
        }
        if(maxi<=0)return false;
        return true;
    }
};