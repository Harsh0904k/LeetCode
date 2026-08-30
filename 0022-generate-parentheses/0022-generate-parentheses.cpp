class Solution {
public:
    void check(int open, int close, string strng, int n, vector<string>& ans){
        if(strng.length()==2*n){
            ans.push_back(strng);
        }
        if(open<n){
            check(open+1, close, strng+"(", n, ans);
        }

        if(close<open){
            check(open, close+1, strng+")", n, ans);
        }
    }


    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        check(0,0,"",n,ans);
        return ans;
    }
};