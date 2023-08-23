class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        string temp;
        for(int i =0;i<nums.size();i++){
            temp=to_string(nums[i]);
            if(temp.length()%2==0){
                c=c+1;
            }
        }
        return c;
    }
};