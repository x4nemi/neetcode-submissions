class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, pair<int,int>> m;
        vector<int> store(1000, 0);

        for(auto t : trips) {
            int passengers = t[0], s = t[1], e = t[2];
            // m[passengers] = {s, e};

            for(int i = s; i <= e; i++) {
                if(i == e) store[i] -= passengers;
                else store[i] += passengers;
                if(store[i] > capacity) return false;
            }
        }

        return true;
    }
};