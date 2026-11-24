class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            long long product=nums[i];
            for(int j=i+1;j<n;j++){
                if(j==1+i){
                    ans=max(ans,2);
                    if(gcd(product,nums[j])!=1){
                        break;
                    }
                    product*=nums[j];
                    continue;
                }
                    if(gcd(product,nums[j])!=1){
                        break;
                    }
                    product*=nums[j];
                    ans=max(ans,j-i+1);
            }          
        }
        return ans;
    }
};