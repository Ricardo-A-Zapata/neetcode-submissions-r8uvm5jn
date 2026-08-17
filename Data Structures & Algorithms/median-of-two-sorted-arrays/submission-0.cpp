class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if (a.size() > b.size()) return findMedianSortedArrays(b, a);
        int m = a.size(), n = b.size(), half = (m + n + 1) / 2;
        int lo = 0, hi = m;
        while (lo <= hi) {
            int i = lo + (hi - lo) / 2;   // taken from a
            int j = half - i;             // taken from b
            long L1 = i ? a[i-1] : LONG_MIN, R1 = i < m ? a[i] : LONG_MAX;
            long L2 = j ? b[j-1] : LONG_MIN, R2 = j < n ? b[j] : LONG_MAX;
            if (L1 <= R2 && L2 <= R1)
                return ((m + n) % 2) ? max(L1, L2)
                                     : (max(L1, L2) + min(R1, R2)) / 2.0;
            if (L1 > R2) hi = i - 1; else lo = i + 1;
        }
        return 0.0;  // unreachable
    }
};