class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int best=0;

    for(int i=0; i<s.length();i++){
    string ans="";
       for(int j=i ;j<s.length();j++){
           char ch=s[j];
         
        if(ans.find(ch) != string::npos){
            break;
          }
          else{
           ans.push_back(ch);
     }
}

   best=max(best,(int)ans.length());
  
  }
 return best;
    }
};