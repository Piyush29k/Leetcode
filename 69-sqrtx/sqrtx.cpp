class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        
        int low = 1, high = x / 2;
        int ans = 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long sq = (long long)mid * mid;
            
            if (sq == x) {
                return mid;
            } else if (sq < x) {
                ans = mid;       // mid is a valid floor candidate, try finding a larger one
                low = mid + 1;
            } else {
                high = mid - 1;  // mid * mid is too large, search the left half
            }
        }
        
        return ans;
    }
};