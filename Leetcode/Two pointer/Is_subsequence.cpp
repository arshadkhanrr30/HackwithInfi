/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while(i < s.length() && j < t.length()) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }

        if(i==s.size()){
            return true;
        }else{
            return false;
        }
    }
};
