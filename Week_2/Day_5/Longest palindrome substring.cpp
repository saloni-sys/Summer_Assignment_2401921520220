class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1)
            return s;

        string LPS = "";

        for (int i = 1; i < s.length(); i++) {

            //for odd length
            int low = i;
            int high = i;

            while (low >= 0 && high < s.length() &&
                   s[low] == s[high]) {
                low--;
                high++;
            }

            string palindrome = s.substr(low + 1, high - low - 1);

            if (palindrome.length() > LPS.length()) {
                LPS = palindrome;
            }

            // for even length
            low = i - 1;
            high = i;

            while (low >= 0 && high < s.length() &&
                   s[low] == s[high]) {
                low--;
                high++;
            }

            palindrome = s.substr(low + 1, high - low - 1);

            if (palindrome.length() > LPS.length()) {
                LPS = palindrome;
            }
        }

        return LPS;
    }
};
