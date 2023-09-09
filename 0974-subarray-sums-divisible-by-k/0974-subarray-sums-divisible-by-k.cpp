class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;  // Initialize with a prefix sum of 0.
        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum = (prefixSum + num) % k;

            if (prefixSum < 0) {
                prefixSum += k;
            }

            if (prefixSumCount.find(prefixSum) != prefixSumCount.end()) {
                count += prefixSumCount[prefixSum];
            }

            prefixSumCount[prefixSum]++;
        }

        return count;
    }
};
