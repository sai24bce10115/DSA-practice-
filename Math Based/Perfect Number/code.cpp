class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=1,digit;
        if(num<=1){
            return false;
        }
        for(int i=2;i*i<=num;++i){
            if(num%i==0){
            if(i!=(num/i)){
                sum+=i;
                sum+=(num/i);
            }
            else{
                sum+=i;
            }
            }
            
        }
        if(sum==num){
            return true;
        }
        return false;
    }
};
