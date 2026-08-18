class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int n =nums.size();
       int best=nums[0];
       int worst=nums[0];
       int ans =nums[0];
       int a,b,c,d;
       int sum=nums[0];
       int minans=0;
       for(int i=1;i<n;i++){
        a=nums[i];
        b=nums[i]+best;
        best=max(a,b);
        c=nums[i];
        d=nums[i]+worst;
        worst=min(c,d);
        ans=max(ans,best);
        
        minans=min(minans,worst);
        sum+=nums[i];
       }
       if(ans<0){
        return ans;
       }
       return max(ans,sum-minans);
    }
};