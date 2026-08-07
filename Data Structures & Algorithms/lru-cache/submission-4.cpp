class LRUCache {
public:
    unordered_map<int, int> m;
    int cap = 0;
    unordered_map<int, int> lastUsed;

    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if( m.count(key) != 0) lastUsed[key]++;
        return m.count(key) == 0 ? -1 : m[key];
    }
    
    void put(int key, int value) {
        if(m.size() == cap){
            pair<int,int> minimo = { -1, 1e6 };
            for(auto x : lastUsed) {
                if(x.second < minimo.second){
                    minimo = x;
                }
            }
            lastUsed.erase(minimo.first);
            m.erase(minimo.first);
        }  
        
        // if(m.count(key) == 0){
        //     lastUsed[key] = 0;
        // } else lastUsed[key]++;
        m[key] = value;
    }
};
