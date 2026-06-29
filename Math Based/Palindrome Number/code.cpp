class Solution {
public:
    bool isPalindrome(int x) {
        int num=x,digit,rev=0;
        if(x<0){
            return false;
        }
        while(x!=0){
            digit=x%10;
            rev=rev*10+digit;
            x/=10;
        }
       return num==rev;
    }
};
