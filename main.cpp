#include<iostream>
#include<vector>

using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> answer;
            int n = nums.size();
            for(int i1=0;i1<n;i1++){
                for(int i2=0;i2<n;i2++){
                    if(nums[i2]+nums[i1] == target){
                        answer = {i2,i1};
                        break;
                    }
                }
            }
            return answer;
        }
};

int main()
{
    Solution s;
    std::vector<int> v = {2,7,11,15};
    s.twoSum(v,9);
    return 0;
}