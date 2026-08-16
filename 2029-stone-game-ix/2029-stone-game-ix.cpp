class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0, 0, 0};

        for (int x : stones) {
            cnt[x % 3]++;
        }

        // If the number of stones divisible by 3 is even,
        // Alice wins iff both types 1 and 2 exist.
        if (cnt[0] % 2 == 0) {
            return cnt[1] > 0 && cnt[2] > 0;
        }

        // If cnt[0] is odd, Alice needs one remainder type
        // to have sufficiently many stones compared with the other.
        return abs(cnt[1] - cnt[2]) > 2;
    }
};