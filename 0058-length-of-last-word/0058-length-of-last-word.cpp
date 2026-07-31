class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        int count = 0;
        while(s[n]==' '){
            n--;
            count++;
        }
        int start = n;
        while(n>=0 && s[n]!=' '){
            n--;
        }
        int end = n;

    
    return start-end;
    }
};