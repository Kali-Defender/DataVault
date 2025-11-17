class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0&&x%10==0) 
        return false;
        int r=x;
        long long t=0;
        while(x>0){
            t=t*10+x%10;
		    x/=10;
        }
        if(t==r){
            return true;
        }
        else{
            return false;
        }
    }
};