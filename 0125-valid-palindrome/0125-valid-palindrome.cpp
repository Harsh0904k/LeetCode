class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i<s.length(); i++){
            if(!isalnum(s[i])){
                s.erase(s.begin()+i);
                i--;
            }
        }
        for(int i = 0; i<s.length(); i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
        }
        
        int left = 0;
        int right = s.length()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};