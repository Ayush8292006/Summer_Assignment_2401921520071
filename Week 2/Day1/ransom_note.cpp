class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int> mp;

        for(auto ch:magazine){
            mp[ch]++;
        }

        for(auto ch:ransomNote){
            if(mp[ch] >= 1){
                mp[ch]--;
            }
            else{
                return false;
            }
        }

        return true;
    }
};