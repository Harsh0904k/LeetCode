class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>nums;
        int left = 0, right= 0, Max = 0;
        while(right<s.length()){
            nums[s[right]]++;
            while(nums[s[right]]>1){
                nums[s[left]]--;
                left++;
            }
            Max = max(Max, right-left+1);
            right++;
        }
        return Max;
    }
};