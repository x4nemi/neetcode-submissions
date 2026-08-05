class Deque {
public:
    vector<int> queue;
    Deque() {
        queue.clear();
    }

    bool isEmpty() {
        return queue.empty();
    }

    void append(int value) {
        queue.push_back(value);
    }

    void appendleft(int value) {
        queue.insert(queue.begin(), value);
    }

    int pop() {
        if(queue.empty()) return -1;
        int val = queue[queue.size() - 1];
        queue.pop_back();
        return val;
    }

    int popleft() {
        if(queue.empty()) return -1;
        int val = queue[0];
        queue.erase(queue.begin());
        return val;
    }
};
