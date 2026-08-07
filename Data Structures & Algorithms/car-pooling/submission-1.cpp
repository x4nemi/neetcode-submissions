class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> passChange(1001, 0);
        for(auto& t : trips) {
            passChange[t[1]] += t[0];
            passChange[t[2]] -= t[0];
        }

        int currPass = 0;
        for(int i = 0; i <= 1000;i++) {
            currPass += passChange[i];
            if(currPass > capacity) return false;
        }

        return true;
    }
};