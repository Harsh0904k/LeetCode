class Solution {
public:
    void check(int open, int close, string& strng, int n, vector<string>& ans){
        if(strng.length()==2*n){
            ans.push_back(strng);
        }
        if(open<n){
            strng.push_back('(');
            check(open+1, close, strng, n, ans);
            strng.pop_back();
        }

        if(close<open){
            strng.push_back(')');
            check(open, close+1, strng, n, ans);
            strng.pop_back();
        }
    }


    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        string temp;
        check(0,0,temp,n,ans);
        return ans;
    }
};