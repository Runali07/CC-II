class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n=sqrt(area);
        while(area%n!=0){
            n--;
        }
        int l= area/n;
        return {l,n};
    }
};