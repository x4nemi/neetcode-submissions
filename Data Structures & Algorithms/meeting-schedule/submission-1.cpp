/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        // sort(intervals.begin(), intervals.end());
        for(int i = 0; i < intervals.size(); i++) {
            for(int j = i + 1; j < intervals.size(); j++){
                if(min(intervals[i].end, intervals[j].end) > max(intervals[j].start, intervals[i].start)) return false;
            }
        }

        return true;
    }
};
