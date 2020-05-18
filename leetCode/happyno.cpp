class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=7){
        long sum=0;
        if(n%10==n) return false;
        while(n){
        int rem=n%10;
        sum=sum+rem*rem;
        n=n/10;
        }
        n=sum;
    }
    return true;
    }
};
