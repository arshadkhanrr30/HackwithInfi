/*Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int w_length=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && w_length==0){
                continue;
            }
            if(s[i]!=' '){
                w_length++;
            }else{
                break;
            }
        }
        return w_length;
    }
};
