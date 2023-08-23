class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>ans;
        int c=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                c=c+1;
                ans.push_back(c);
            }
            if(nums[i]!=1){
                ans.push_back(0);
                c=0;
            }
        }
        int final =  *max_element(ans.begin(), ans.end());
        for(int i : ans){
            cout<<i<<" ";
        }
        return final;
    }
};