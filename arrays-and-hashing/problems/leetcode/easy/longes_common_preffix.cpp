class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m = 300;
        string s = "";
        for (string s: strs)
            m = min(m,(int)s.size());
        cout <<  m << endl;

        for (int i  = 0; i < m ; i ++){
            char c  = strs[0][i];
            bool band = true;
            for (int j  =  1; j < strs.size(); j ++){
                if(strs [j][i] != c){
                    band = false;
                    break;
                }
            }
            if(!band) return s;
            s += c;
        }
        return s;
    }
};