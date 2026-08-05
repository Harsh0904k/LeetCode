class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;
            }
            while(right>left && !isalnum(s[right])){
                right--;
            }
    
            if(isupper(s[left])){
                s[left] = tolower(s[left]);
            }

            if(isupper(s[right])){
                s[right] = tolower(s[right]);
            }
        

            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};