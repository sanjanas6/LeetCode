class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1,j=nums.size()-1;
        while(i && nums[i-1]>=nums[i]) i--;
        if(!i) return reverse(nums.begin(),nums.end());
        while(nums[i-1]>=nums[j]) j--;
        swap(nums[i-1],nums[j]);
        return reverse(nums.begin()+i,nums.end());
    }
};