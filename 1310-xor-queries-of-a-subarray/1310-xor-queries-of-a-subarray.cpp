class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
         vector<int> prefix(arr.size() + 1, 0);

        for (int i = 0; i < arr.size(); i++) {
            prefix[i + 1] = prefix[i] ^ arr[i];
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            ans.push_back(prefix[r + 1] ^ prefix[l]);
        }

        return ans;
    }
};