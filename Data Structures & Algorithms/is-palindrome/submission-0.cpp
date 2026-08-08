class Solution {
public:
    bool isPalindrome(string s) {
        int j =0;
        for(int i =0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z') // Convert uppercase to lowercase alphabets
                s[i] = s[i] - 'A' + 'a';
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                s[j] = s[i];
                j++;
            }
        }
        for (int l = 0, r = j-1; l <= r; l++, r--)
            if (s[l] != s[r]) return false;
        return true;
    }
};