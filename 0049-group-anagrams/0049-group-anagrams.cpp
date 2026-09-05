class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> key;
        vector<vector<string>> ans;
        for(int i = 0; i<strs.size(); i++){
            string temp;
            temp = strs[i];
            sort(temp.begin(), temp.end());
            key[temp];
            if(key.contains(temp)){
                key[temp].push_back(strs[i]);
            }
        }

        for(auto x : key){
            ans.push_back(x.second);
        }
        return ans;
    }
};