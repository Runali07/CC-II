class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        set<int>s;
        int num=0;
        for(int i=0;i<n;i++){
            if(digits[i]==0)
            continue;
            for(int k=0;k<n;k++){
                if(digits[k]%2!=0)
                continue;
                for(int j=0;j<n;j++){
                    if(i==j ||j==k|| i==k)
                    continue;
                    num=digits[i]*100+digits[j]*10+digits[k];
                    s.insert(num);
                }
            }
        }
        return s.size();
    }
};