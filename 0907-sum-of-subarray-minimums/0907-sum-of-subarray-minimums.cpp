/**
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * where `n` is the length of the vector `arr`
 */
class Solution {
 public:
  int sumSubarrayMins(const vector<int> &arr) {
    constexpr int mod = 1e9 + 7;
    const int n = static_cast<int>(arr.size());
    stack<int> st;   // a monotonously-increasing stack
    /**
     * prev[i] is the maximum index such that prev[i] < i and arr[prev[i]] < arr[i]
     */
    vector<int> prev(n, -1);
    /**
     * next[i] is the minimum index such that next[i] > i and arr[next[i]] < arr[i]
     */
    vector<int> next(n, n);
    for (int i = 0; i < n; ++i) {
      while (!st.empty() && arr[st.top()] > arr[i]) {
        next[st.top()] = i;
        st.pop();
      }
      if (!st.empty()) {
        prev[i] = st.top();
      }
      st.emplace(i);
    }
    
    int ret = 0;
    for (int i = 0; i < n; ++i) {
      ret = (ret + static_cast<long long>(arr[i]) * (i - prev[i]) * (next[i] - i)) % mod;
    }
    return ret;
  }
};