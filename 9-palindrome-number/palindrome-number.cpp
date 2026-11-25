class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) return false;

        int temp = x;
        int count = 0;

        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
        int rev = 0;
        int half = count / 2;

        for (int i = 0; i < half; i++) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        if (count % 2 != 0) {
            x = x / 10;
        }
        return x == rev;
    }
};