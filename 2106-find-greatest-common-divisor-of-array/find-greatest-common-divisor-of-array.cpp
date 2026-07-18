class Solution {
public:
    int findGCD(vector<int>& nums) {
      int smaller=nums[0];
      int greater=nums[0];
      for(int num:nums){
        smaller=min(smaller,num);
        greater=max(greater,num);
      }  
      return gcd(smaller,greater);
    }
};