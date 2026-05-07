//The pattern to internalize

//Whenever you catch yourself writing a second loop to "search" inside the first loop — ask: can I use a hash map to answer that search in O(1)?

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i = 0; i< nums.size(); ++i){
            int missing = target - nums[i];
            if(mp.count(missing)){
                return {mp[missing], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
