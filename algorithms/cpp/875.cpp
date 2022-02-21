class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(begin(piles), end(piles)) + 1;
        while (l < r) {
            int m = l + (r - l) / 2;
            int _h = 0;
            for (int p : piles) {
                _h += p / m;
                if (p % m) _h += 1;
            }
            if (_h <= h) r = m;
            else l = m + 1;
        }
        return l;
    }
};
