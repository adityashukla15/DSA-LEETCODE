class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = sqrt(c);

        while (a <= b) {
            long long value = a * a + b * b;

            if (value == c)
                return true;

            else if (value < c)
                a++;

            else
                b--;
        }

        return false;
    }
};