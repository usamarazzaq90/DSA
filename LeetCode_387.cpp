class Solution {
public:
    int firstUniqChar(string s) {
        vector <int> frequency(26,0);

        for(int i=0;s[i]!='\0';i++){
            frequency[s[i]-'a']++;
        }

        for(int i=0;s[i]!='\0';i++){
            if(frequency[s[i]-'a']==1) return i;
        }
        return -1;
    }
};
