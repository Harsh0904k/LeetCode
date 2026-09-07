class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> smp;
        unordered_map<char,int> tmp;

        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i<s.length(); i++){
            smp[s[i]]++;
        }
        for(int i = 0; i<t.length(); i++){
            tmp[t[i]]++;
        }
        for(auto x:smp){
            if(x.second != tmp[x.first]){
                cout<<"ran1";
                return false;
            }
        }
        return true;
    }
};