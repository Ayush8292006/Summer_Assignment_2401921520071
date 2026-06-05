class Solution {
public:

void maxxSum(vector<int>& nums,int &currentSum,int &maxSum,int i){
    if(i>=nums.size()){
        return;
    }
    currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
        maxxSum(nums,currentSum,maxSum,i+1);     
}
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = nums[0];

        maxxSum(nums,currentSum,maxSum,0);

        return maxSum;
    }
};