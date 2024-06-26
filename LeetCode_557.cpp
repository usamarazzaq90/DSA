class Solution {
public:
    string reverseWords(string s) {
        int left=0, right=left;
        while(left < s.size()){
            while(right < s.size() && s[right]!=' '){
                right++;
            }
            reverse(s.begin()+left,s.begin()+right);
            left=right+1;
            right=left;
        }
        return s;
    }
};
