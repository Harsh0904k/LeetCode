class Solution {
public:
    string longestPalindrome(string s) {
        int Max = 0;
        int lt = 0;
        
        int mid = 0;
        while(mid<s.length()){
            int left = mid-1;
            int right = mid+1;

            while(left>=0 && right != s.length() && s[left] == s[right]){
                left--;
                right++;
            }
            
            if(right-left-1>Max){
                Max = right-left-1;
                lt = left+1;
            }

            left = mid;
            right = mid + 1;           
            while(left>=0 && right < s.length() && s[left] == s[right]){
                left--;
                right++;
            }
            
            if(right-left-1>Max){
                Max = right-left-1;
                lt = left+1;
            }
                         
            mid++;
        }
        return s.substr(lt,Max);
         
    }
};