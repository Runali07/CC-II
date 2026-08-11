class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n=nums.size();
       for(int i=0;i<n;i++){
        int low=0;
        int high=0;
        for(int j=0;j<i;j++){
            low+=nums[j];
        }
        for(int j=i+1;j<n;j++){
            high+=nums[j];
        }
        if(low==high){
            return i;
        }
       }
       return -1;
    }
};