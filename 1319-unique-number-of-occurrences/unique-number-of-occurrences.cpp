class Solution {
public:
    bool checkUnique(unordered_map<int,int>& freq){
        unordered_set<int>seen;
        for(auto x : freq){
            if(seen.count(x.second))
            return false;
            seen.insert(x.second);
        }
        return true;
    }
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int num:arr)
        freq[num]++;
        return checkUnique(freq);

    }
};