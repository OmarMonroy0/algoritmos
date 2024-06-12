class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set < int > us;
        for (int i : nums){
            if (us.count(i)) return true;
            us.insert(i);
        }   
        return false;
    }
};