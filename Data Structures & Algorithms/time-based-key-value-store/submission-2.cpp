class TimeMap {
public:
    map<string, string> original;
    map<string, vector<int>> timestamp;
    map<string, vector<pair<string, int>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        // original[key] = value;
        // timestamp[key].push_back(timestamp);
        m[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        sort(m[key].begin(), m[key].end(),[](const auto& a, const auto& b) {
            return a.second < b.second;
        });

        return findTimestamp(m[key], timestamp);
    }

    string findTimestamp(vector<pair<string,int>>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int result_index =-1; // Default if no element is valid

        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevents integer overflow

            if (arr[mid].second <= target) {
                result_index = mid; // This mid is a candidate; save it!
                low = mid + 1;      // Try to find a larger valid element on the right
            } else {
                high = mid - 1;     // Too big; search the left half
            }
        }
        return result_index == -1 ? "":arr[result_index].first;
    }
};
