//week12-6.cppp
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n =nums.size();//�}�C���j�p
        vector<int> ans(n);//ans���j�p
        for(int i=0; i<n; i++){
            ans[i]=nums[nums[i]];
        }

        return ans;

    }
};
