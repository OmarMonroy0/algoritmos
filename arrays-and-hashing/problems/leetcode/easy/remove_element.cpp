class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = (int)nums.size();
        int j = 0;
        for (int  i = 0; i < (int)nums.size(); i++){
            if (nums [ i ] == val) n--;
            else
                nums [ j ++ ] = nums [ i ];
        }
        return n;
    }
};