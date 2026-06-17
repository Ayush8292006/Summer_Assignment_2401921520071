class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          int n = nums2.size();
           vector<int> nge(n);
           stack<int> st;

       
        for (int i = n - 1; i >= 0; i--) {
           
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
        
            if (st.empty()){
                nge[i] = -1;
            } 
            else {
                nge[i] = st.top();
            }
            st.push(nums2[i]);
        }
        
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            int val = nums1[i];
            for (int j = 0; j < n; j++) {
                if (nums2[j] == val) {
                    ans.push_back(nge[j]);
                    break;
                }
            }
        }

        return ans;
    }
};