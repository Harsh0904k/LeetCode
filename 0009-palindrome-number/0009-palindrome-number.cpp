class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int left = 0;
        int right = str.length()-1;
        while(left<right){
            if(str[left]==str[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};