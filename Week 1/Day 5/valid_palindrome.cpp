class Solution {
public:
    bool isPalindrome(string s) {
    for(int i=0; i<s.length();i++){
        if(!isalnum(s[i])){
          s.erase(i,1);
          i--;
  }
 }

     for(int i=0; i<s.length();i++){
           s[i]=tolower(s[i]);
     }

 string rev=s;

 reverse(rev.begin(),rev.end());

 

 if(s==rev){
        return true;
     }
  else{
        return false;
     }
    }
};