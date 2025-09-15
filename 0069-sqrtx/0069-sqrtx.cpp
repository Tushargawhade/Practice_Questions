class Solution {
public:
    int mySqrt(int x) {

    int st = 0, end = x;
    long long mid = st + (end - st) / 2;
    int val = -1;

    while (st <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
        }
        else if (mid * mid < x)
        {
            val = mid;
            st = mid + 1;
        }

        mid = st + (end - st) / 2;
    }
    return val;

    }
};