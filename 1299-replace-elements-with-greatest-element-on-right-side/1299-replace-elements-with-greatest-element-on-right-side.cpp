class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        int max_value = -1;
        for(int j = i + 1; j < n; j++) {
            max_value = max(max_value, arr[j]);
        }
        ans.push_back(max_value);
    }
    return ans;
    }
};