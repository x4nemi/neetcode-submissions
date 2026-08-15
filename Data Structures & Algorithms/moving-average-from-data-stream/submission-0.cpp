class MovingAverage {
public:
    vector<int> q;
    int s;
    MovingAverage(int size) {
        s = size;
    }
    
    double next(int val) {
        if(q.size() + 1 > s) {
            q.erase(q.begin());
        }
        q.push_back(val);

        double avg = 0;
        for(int n : q) avg += n;

        return avg/q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
