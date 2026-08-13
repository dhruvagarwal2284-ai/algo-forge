class Solution {
public:
    int maxArea(vector<int>& height) {
int k = 1;
int c = 0;
int j = 0;
int l = height.size() - 1;
long int area = 0;

while (j < l) {

    c = min(height[j], height[l]) * (l - j);

    if (c > area) {
        area = c;
    }

    if (height[j] < height[l]) {
        j++;
    }
    else {
        l--;
    }
}
        return area;
    }
};