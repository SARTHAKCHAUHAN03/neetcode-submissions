class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        for(int i=0;i<strs[0].length();i++){
            for(auto it:strs){
                if(i==it.size() || it[i]!=strs[0][i]) return it.substr(0,i);
            }
        }
        return strs[0];
    }
};