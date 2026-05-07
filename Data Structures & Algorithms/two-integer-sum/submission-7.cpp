//The pattern to internalize

//Whenever you catch yourself writing a second loop to "search" inside the first loop — ask: can I use a hash map to answer that search in O(1)?

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>my_map;
       

         for(int i = 0; i< nums.size(); ++i){
           int missing_value = target - nums[i];
           if(my_map.count(missing_value)){
            return {my_map[missing_value],i};

           }
           my_map[nums[i]] = i;
        }
        return {};
        
    }
};
