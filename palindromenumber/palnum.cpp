// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        // All negative numbers are not palindromes and therefore return false
        if (x < 0) {
            return false;
        }

        string myInt = to_string(x);

        // Iterate and return false if at any point current index does not equal inverse index
        while (myInt.size() > 1) {
            int last = myInt.size() - 1;
            if (myInt[0] != myInt[last]) {
                return false;
            } else {
                myInt.erase(last);                
                myInt.erase(myInt.begin());
            }
        }
        return true;
    }
};