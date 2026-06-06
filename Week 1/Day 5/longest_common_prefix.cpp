class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans1 = "";
        int n = strs.size();

       
        if(n == 1){
            return strs[0];
        } 

        for(int j = 0; j < strs[0].size(); j++){
            char ch = strs[0][j];

            for(int k = 1; k < n; k++){
                if(j >= strs[k].size() || strs[k][j] != ch){
                    return ans1;  
                }
            }

            ans1.push_back(ch);
        }

        return ans1;
    }
};