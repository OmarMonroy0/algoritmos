class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set < int > s;
        map <  int,int> m;
        for (int i = 0; i < nums.size(); i++){
            int missing  = target - nums [ i ];
            if (m.count(missing)) return  {m [ missing],i};
            m.insert ({nums[i],i});
        }
        return {};
    }
};
