class Solution {
public:
    int reverse(int x) {
        string num = to_string(x);
        int count=0;
        if(num[0]=='-'){
            count = 1;
        }
        std::reverse(num.begin()+count, num.end());
        long long n = stoll(num);

        if (n > INT_MAX || n < INT_MIN) {
            return 0;
        }
        return n;
        
    }
};