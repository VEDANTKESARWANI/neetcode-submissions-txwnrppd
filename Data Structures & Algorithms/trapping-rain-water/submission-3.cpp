class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;

        int tot = 0;
        int left_max = height[l];
        int right_max = height[r];

        while (l < r) {
            if (left_max < right_max) {
                l++;
                left_max = max(left_max, height[l]);
                height[l]=min(left_max, height[l]);
                tot += left_max - height[l];
            } else {
                r--;
                right_max = max(right_max, height[r]);
                                height[r]=min(right_max, height[r]);

                tot += right_max - height[r];
            }
        }

        return tot;
    }
};



