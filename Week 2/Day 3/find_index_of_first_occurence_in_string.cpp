class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> ans;
        int i=haystack.find(needle);
        ans.push_back(i);


        if(ans.size()==0){
            return -1;
        }
        else{
            return ans[0];
        }
        
        
    }
};