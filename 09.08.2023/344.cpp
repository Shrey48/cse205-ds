class Solution {
public:
    void reverseString(vector<char>& s) {
        f(0,s);
       }
        void f(int i,vector<char>& s){
            if(i>=s.size()/2) return;
            swap(s[i],s[s.size()-i-1]);
            f(i+1,s);
        
    }
};