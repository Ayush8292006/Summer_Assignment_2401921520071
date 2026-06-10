class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;

        int n = s.size();
        int k = p.size();

        if (k > n) {
            return ans;
        }

        vector<int> pFreq(26, 0);
        vector<int> winFreq(26, 0);

        for (char ch : p) {
            pFreq[ch - 'a']++;
        }

        for (int i = 0; i < k; i++) {
            winFreq[s[i] - 'a']++;
        }

        if (winFreq == pFreq) {
            ans.push_back(0);
        }

        for (int i = k; i < n; i++) {

            winFreq[s[i] - 'a']++;
            winFreq[s[i - k] - 'a']--;

            if (winFreq == pFreq) {
                ans.push_back(i - k + 1);
            }
        }

        return ans;
    }
};