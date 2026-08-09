class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maximo = 0, left = 0, right = heights.size() - 1;

        while(left < right) {
            maximo = max(maximo, (right - left) * min(heights[left], heights[right]));
            if(heights[left] < heights[right]) left++;
            else if(heights[left] > heights[right]) right--;
            else left++, right--;
        }

        return maximo;
    }
};
