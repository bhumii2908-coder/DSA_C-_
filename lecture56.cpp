class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact = 1;

        for (int i = 1; i < n; i++) {
            fact *= i;
        }
        .+  

        for (int i = 1; i <= n; i++) {
            numbers.push_back(i);
        }

        k--; // Convert to 0-based index
        string result = "";

        while (n > 0) {
            int index = k / fact;
            result += to_string(numbers[index]);

            numbers.erase(numbers.begin() + index);

            k %= fact;
            n--;

            if (n > 0)
                fact /= n;
        }

        return result;
    }
};