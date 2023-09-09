class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return {};
        }
        
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        
        vector<vector<int>> merged_intervals;
        merged_intervals.push_back(intervals[0]);
        
        for (int i = 1; i < intervals.size(); ++i) {
            // Check if the current interval overlaps with the last merged interval
            if (intervals[i][0] <= merged_intervals.back()[1]) {
                // Merge the overlapping intervals
                merged_intervals.back()[1] = max(merged_intervals.back()[1], intervals[i][1]);
            } else {
                // If no overlap, add the current interval to the merged_intervals vector
                merged_intervals.push_back(intervals[i]);
            }
        }
        
        return merged_intervals;
    }
};
