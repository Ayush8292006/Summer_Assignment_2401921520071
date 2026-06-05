class Solution {
public:
 vector<int> solve(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        arr[i]=arr[i]*arr[i];
    }
    sort(arr.begin(),arr.end());
    return arr;
}

    vector<int> sortedSquares(vector<int>& nums) {
          return solve(nums);
       
    }
};