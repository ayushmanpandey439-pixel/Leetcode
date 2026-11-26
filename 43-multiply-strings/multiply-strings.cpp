class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size();
        int n = num2.size();

        if (num1 == "0" || num2 == "0") {
            return "0";
        }
        vector<int> result(m + n, 0);

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {

                int a = num1[i] - '0';
                int b = num2[j] - '0';
                int product = a * b;
                int sum = product + result[i + j + 1];
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }
        int i = 0;
        while (i < result.size() - 1 && result[i] == 0) {
            i++;
        }
        string ans = "";
        for (; i < result.size(); i++) {
            ans += to_string(result[i]);
        }
        return ans;
    }
};