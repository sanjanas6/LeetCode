class Solution {
public:
    
    // Function to check for palindromic substrings
    int check(string s, int p1, int p2, int &st, int &en)
    {
        int count = 0;
        
        if (p1 == p2) {
            count++;
            p1--;
            p2++;
        }
        
        while (p1 >= 0 && p2 < s.length()) {
            if (s[p1] != s[p2]) {
                break;
            }
            
            p1--;
            p2++;
            count += 2;
        }
        
        st = p1 + 1;
        en = p2 - 1;
        return count; 
    }
    
    string longestPalindrome(string s) {
        int st = -1;
        int en = -1;
            
        int len = 0;
        
        int fs = -1;
        int fe = -1;
        
        for (int i = 0; i < s.length(); i++) {
            // For Odd Length
            int x = check(s, i, i, st, en);
            
            if (x > len) {
                len = x;
                fs = st;
                fe = en;
            }
            
            // For Even Length
            int y = check(s, i, i + 1, st, en);
            
            if (y > len) {
                len = y;
                fs = st;
                fe = en;
            }
        }
        
          // No palindrome found, return an empty string
        if (fs == -1 || fe == -1) {
            return "";
        }
        
        return s.substr(fs, len);
    }
};
