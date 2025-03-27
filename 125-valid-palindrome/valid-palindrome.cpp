class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        while (start < end) {
            // Skip non-alphanumeric characters
            while (start < end && !isAlphaNumeric(s[start])) start++;
            while (start < end && !isAlphaNumeric(s[end])) end--;
            if (tolower(s[start]) != tolower(s[end])) 
                return false;

            start++; 
            end--;    
        }
        return true;
    }

    bool isAlphaNumeric(char ch) {
        return (ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z');
    }
};
