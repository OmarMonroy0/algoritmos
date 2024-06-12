class Solution {
public:
    bool isSubsequence(const string &s, const string &t) {
        if ( s.size() > t.size()) return false;
        if (s.size() == 0) return true;
        int i  = 0;
        int j  = 0;
        while ( j < t.size()){
            if ( s[ i] == t[ j ]) 
                i ++,j++;
            else j ++;
            if (i == s.size()) return true;
             
        }
        return false;
    }
};