class Solution {
public:
    int addDigits(int num) {
        string s;
        long long val=num;
        s=to_string(num);
        while(val>=10){
        val=0;
        for(char ch:s){
            val+=(ch-'0');
        }
        s=to_string(val);
      }
      return val;
    }
};
