class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string final = "";

        if (strs.empty() || strs[0].empty()) {
            return final;
        }

        int n = strs[0].size(); 
        
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].size() < n) {
                n = strs[i].size();
            }
        }

        
        for (int i = 0; i < n; i++) {
            char current = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != current) {
                    return final; 
                }
            }
            final.push_back(current);  
        }

        return final;
    }
};
