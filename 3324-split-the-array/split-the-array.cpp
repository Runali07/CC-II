class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        // Fixed-size array to map frequencies of numbers 1 to 100
        vector<int> track(100, 0);

        for(int num : nums) {
            track[num - 1]++;
            // If any value appears 3 or more times, it cannot be split into 2 unique arrays
            if(track[num - 1] > 2) {
                return false;
            }
        }

        return true;
    }
};