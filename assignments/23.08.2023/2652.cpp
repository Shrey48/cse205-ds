class Solution {
public:
    int sumOfMultiples(int n) {
        int x=0;
        for(int i=0;i<=n;i++){
            
            if(i%3==0||i%5==0||i%7==0){
                x=x+i;
            }
        }
        return x;
    }
};