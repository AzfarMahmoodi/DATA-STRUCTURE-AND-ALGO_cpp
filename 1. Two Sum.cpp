class Solution {
public:
    vector<int> twoSum(vector<int>& book, int target) {
        unordered_map<int, int> mpp;
        int n=book.size();
    for (int i = 0; i < n; i++) {
        int num = book[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
    }
};
