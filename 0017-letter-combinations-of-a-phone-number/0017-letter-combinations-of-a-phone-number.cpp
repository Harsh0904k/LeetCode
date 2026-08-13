class Solution {
public:
vector<string> ans;
    void print(string digits, string mp[], int index, string current){
        if(index==digits.length()){
            ans.push_back(current);
            return;
        }

        int digit = digits[index]-'0';
        
        for(char ch : mp[digit]){
            current.push_back(ch);
            print(digits,mp,index+1,current);
            current.pop_back();
        }




    }
    vector<string> letterCombinations(string digits) {
        string mp[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    print(digits, mp, 0 , "");

    return ans;
    }
};