class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> str;
        int left = 0;
        int right = 0;
        int Max = 0;
        while (right < s.length()) {
            str[s[right]]++;
                while (str[s[right]] > 1) {
                str[s[left]]--;
                left++;
                }
        Max = max(Max, right - left + 1);
        right++;
        }

        return Max;
    }
};