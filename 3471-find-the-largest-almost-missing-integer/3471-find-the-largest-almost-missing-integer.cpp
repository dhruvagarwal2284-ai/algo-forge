class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int a = 0;
        int d = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[0] == nums[i]) {
                a = 1;
                break;
            }
        }
        for (int j = 0; j < nums.size() - 1; j++) {
            if (nums[nums.size() - 1] == nums[j]) {
                d = 1;
                break;
            }
        }
        if (k == nums.size()) {
            int temps = -1;
            for (int l = 0; l < nums.size(); l++) {
                if (nums[l] > temps) {
                    temps = nums[l];
                }
            }
            return temps;
        }
        if (k == 1) {
            int temps = -1;
            int re = 0;
            unordered_map<int, int> freq;
            for (int i = 0; i < nums.size(); i++) {
                freq[nums[i]]++;
            }
            int z = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (freq[nums[i]] > 1) {
                    z++;
                }
            }
            if (z == nums.size()) {
                return -1;
            }
            for (int l = 0; l < nums.size(); l++) {
                if (nums[l] > temps) {
                    re = temps;
                    temps = nums[l];
                }
                if (freq[temps] > 1) {
                    nums[l] = -1;
                    temps = re;
                }
            }
            return temps;
        }
        if (a == 1 && d == 1) {
            return -1;
        }
        if (a == 1 && d == 0) {
            return nums[nums.size() - 1];
        }
        if (a == 0 && d == 1) {
            return nums[0];
        } else {
            return max(nums[0], nums[nums.size() - 1]);
        }
    }
};