class Solution {
public:
    int nextGreaterElement(int n) {
        std::vector<int> digits;
        while (n > 0) {
            digits.push_back(n % 10);
            n /= 10;
        }
        std::reverse(digits.begin(), digits.end());

        int i = digits.size() - 2;
        while (i >= 0 && digits[i] >= digits[i + 1]) {
            i--;
        }

        if (i == -1) {
            return -1;
        }

        int j = digits.size() - 1;
        while (digits[j] <= digits[i]) {
            j--;
        }

        std::swap(digits[i], digits[j]);

        std::reverse(digits.begin() + i + 1, digits.end());

        long long result = 0;
        for (int digit : digits) {
            result = result * 10 + digit;
        }

        return (result <= INT_MAX) ? static_cast<int>(result) : -1;
    }
};