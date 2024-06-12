class Solution {
public:

    
    vector<vector<int>> generate(int n) {
        if (n == 1) return {{1}};
        auto vv = generate ( n - 1);
        auto v  = vv [ vv.size()  - 1];
        vector < int > ans;
        ans.push_back  ( 1 );
        for (int i  = 0; i < v.size()- 1; i ++){
            int sum = v[ i ] + v[ i + 1];
            ans.push_back (  sum ) ;
        }
        ans.push_back ( 1 );
        vv.push_back ( ans );
        return vv;
    }
};