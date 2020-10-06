
//****************************************************** Brute Force Approach(35% Faster) **********************************************//
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> arr(2);
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    arr[0]=i;
                    arr[1]=j;
                }
            }
            
        }
        return arr;
    }
};
//***************************************************** Unordered Map Approach(95% Faster) *********************************************//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return ans;
            

    }
};
