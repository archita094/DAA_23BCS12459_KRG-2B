#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> nge(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            nge[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return nge;
}

int main() {
    vector<int> nums = {1, 3, 2, 5, 20, 15, 40};
    vector<int> result = nextGreaterElement(nums);

    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}
