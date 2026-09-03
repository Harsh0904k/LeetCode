class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.empty() || strs[0].empty()){
            return ans;
        }

        for(int i = 0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            for(int j = 0; j<strs.size(); j++){
                if(i<strs[j].size() && ch == strs[j][i]){
                    if(j==strs.size()-1){
                        ans.push_back(ch);
                    }
                    
                }
                else{
                    return ans;
                }

            }
        }
        return ans;
        
    
    }
};