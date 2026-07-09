class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> check;
        for(int i = 0; i<s.length(); i++){
            check[s[i]]++;
        }

        char temp;
        
        for(int i = 0; i<t.length(); i++){
            check[t[i]]--;

        }
        for(auto x : check){
            if(x.second != 0){
                return false;
            }
        }
        return true;
    }
};