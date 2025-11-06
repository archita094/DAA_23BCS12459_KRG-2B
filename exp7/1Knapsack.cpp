class Solution {
public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        
        vector<vector<int>> ans;
        for (auto &p : freq) {
            ans.push_back({p.first, p.second});
        }
        
        return ans;
    }
};
