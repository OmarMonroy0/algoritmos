class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = (int)arr.size();
        vector < int > preffix(n);
        vector < int > ans(n);
        preffix [  n - 1 ] = arr [ n - 1 ];
        for (int i = n - 2; i >= 0; i --)
            preffix [ i ] = max(preffix[i + 1],arr[ i ]);
        for (int i  = 0;  i < n - 1;  i++)
            ans [ i ] = preffix [ i + 1];
        ans [ n - 1] = -1;
        return ans;
    }
};