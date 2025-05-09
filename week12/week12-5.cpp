//week12-6.cppp
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n =nums.size();//陣列的大小
        vector<int> ans(n);//ans的大小
        for(int i=0; i<n; i++){
            ans[i]=nums[nums[i]];
        }

        return ans;

    }
};
