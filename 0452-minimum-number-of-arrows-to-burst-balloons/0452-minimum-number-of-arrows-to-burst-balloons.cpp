class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int arrows = 1;
    sort(points.begin(), points.end(), [](const vector<int> &v1,const  vector<int> &v2) {return v1[1] < v2[1];} );
    int x = points[0][1];
    for (int i = 0; i < points.size(); i++)
    {
        if(x >= points[i][0] && x <= points[i][1]) continue;
        else {
            arrows++;
            x = points[i][1];
        }
    }

    return arrows;
    }
};